#include "pch.h"
#include "ObjectFactory.h"
#include "Engine.h"
#include "Library.h"
#include "Object.h"
#include "View.h"
#include "InputDevice.h"
#include "Timer.h"
#include "Texture.h"
#include "GraphicsDevice.h"
#include "TextDevice.h"
#include "AudioDevice.h"
#include "PhysicsDevice.h"
#include "Map.h"
#include "Task.h"
#include "Blackboard.h"
#include "ComponentsList.h"
#include "PlayerGui.h"


//Constructor
Engine::Engine(std::map<std::string, std::string>& paths) : updatePlayer(false), curMapNum(1), gameOver(false)
{
    nextLevel = std::make_shared<bool> (false);

    Gravity.x = 0.f;
    Gravity.y = 980.f;
    //save paths in engine for use later
    this->paths = paths;
    
    map = std::make_shared<Map>();

    //Graphics Device
    gDevice = std::make_shared<GraphicsDevice>(800, 600);
    if (!gDevice->Initialize(true))
    {
        printf("Graphics Device could not initialize! SDL_Error: %s\n", SDL_GetError());
        exit(1);
    }

   

    aDevice = std::make_shared<AudioDevice>(22050, MIX_DEFAULT_FORMAT, 2, 4096);//values stolen from orme
    
    //Construct Frame Timer
    fps = std::make_unique<Timer>();
    if (!fps->Initialize(100)) {
        printf("Frame Timer could not initialize! SDL_Error: %s\n", SDL_GetError());
        exit(1);
    }

    //Construct Physics
    physicsDev = std::make_shared<PhysicsDevice>(Gravity);
    if(!physicsDev->initialize())
    {
        std::cout << "ERROR::ENGINE::LOADLEVEL::Physics Device could not create world \n";
    }
   
    //blackboard for AI use
    Task::blackboard = std::make_shared<Blackboard>();
	Task::blackboard->objects = objects;

    //Create Library
    objectLibrary = std::make_shared<Library>();
    
    //Textdevice
    tDevice = std::make_shared<TextDevice>(objectLibrary, *gDevice);

    //Inpute Dev
    inputDev = std::make_shared<InputDevice>();

    //View
    main_view = std::make_shared<View>(inputDev, Vector2D(0.f, 0.f), Vector2D(2048.f - (gDevice->getWidth() / 2) - 48, 0.f)); // Change with MAPSIZE FIXME!!!

    engineData = std::make_shared<EngineData>(gDevice, aDevice, physicsDev, tDevice, objectLibrary, nextLevel, main_view);
    //Loads level
    loadLevel();

    playerGui = std::make_shared<PlayerGui>(engineData, player);
}

/*Destructor
Deletes any pointers an instance of Engine points to in order to clean/free
up memory and prevent memory leaks.
*/
Engine::~Engine() {
    reset();
    aDevice->destroy();
    gDevice->ShutDown();
}

void Engine::loadLevel() 
{
    //Loads spritesheets into artLibrary   
    if (spriteDoc.LoadFile(paths["spritePath"].c_str()) != tinyxml2::XML_SUCCESS)
    {
        std::cout << "ERROR::ENGINE::SPRITE XML FILE COULD NOT LOAD \n" << paths["spritePath"];
        exit(1);
    }
    tinyxml2::XMLElement* spriteRoot = spriteDoc.FirstChildElement("Level"); //root of xml

    objectLibrary->loadTextures(*gDevice, physicsDev, spriteRoot);

    //Loads Fonts
    if (fontDoc.LoadFile(paths["fontPath"].c_str()) != tinyxml2::XML_SUCCESS)
    {
        std::cout << "ERROR::ENGINE::FONT XML FILE COULD NOT LOAD \n" << paths["fontPath"];
        exit(1);
    }
    tinyxml2::XMLElement* fontRoot = fontDoc.FirstChildElement("Level"); //root of xml

    objectLibrary->loadFonts(fontRoot);
  

    //Loads Audio
    if (audioDoc.LoadFile(paths["audioPath"].c_str()) != tinyxml2::XML_SUCCESS)
    {
        std::cout << "ERROR::ENGINE::AUDIO XML FILE COULD NOT LOAD \n" << paths["audioPath"];
        exit(1);
    }
    tinyxml2::XMLElement* audioRoot = audioDoc.FirstChildElement("Level"); //root of xml

    aDevice->initialize(audioRoot);

    aDevice->playMusic("Background");

    //Loads level using library
    if (levelDoc.LoadFile(paths["levelPath"].c_str()) != tinyxml2::XML_SUCCESS)
    {
        std::cout << "ERROR::ENGINE::LEVEL XML FILE COULD NOT LOAD \n" << paths["levelPath"];
        exit(1);
    }

    tinyxml2::XMLElement* root = levelDoc.FirstChildElement("Level"); //root of xml
    loadMap(root);
}
void Engine::loadMap(tinyxml2::XMLElement* root)
{
    //World borders
    Vector2D topLeft, topRight, botLeft, botRight;

    float width = 2048; //changed when making a map, can use mapwidth.
    float height = float(gDevice->getHeight());
    topLeft = { 0.f, 0.f };
    topRight = { width, 0.f };
    botLeft = { 0.f, height };
    botRight = { width, height };


    borders.push_back(physicsDev->createEdge(topLeft, topRight));
    right = physicsDev->createEdge(topRight, botRight, true);

    borders.push_back(physicsDev->createEdge(botLeft, botRight));
    borders.back()->GetFixtureList()->SetFriction(.7f);
    borders.push_back(physicsDev->createEdge(topLeft, botLeft));


    //ObjectCreation
    tinyxml2::XMLElement* object_1 = root->FirstChildElement(); //First object
    //Player
    objects.push_back(objectLibrary->getObjectFactory()->create(object_1)); //creats object
    objects.back()->initialize(engineData);
    player = objects.back();
    if (curMapNum > 1) {
        player->getComponent<AttributeComponent>()->health = health;
        playerGui->setAc(player->getComponent<AttributeComponent>());
    }

   
    object_1 = object_1->NextSiblingElement(); //goes to next object
    Task::blackboard->playerPosition = &player->getComponent<PhysicsComponent>()->getPosition();


    //Background
    objects.push_back(objectLibrary->getObjectFactory()->create(object_1)); //creats object
    objects.back()->initialize(engineData);
    background = objects.back();
    object_1 = object_1->NextSiblingElement(); //goes to next object

    //Everything Else
    while (object_1) { //loops until no more objects exist

        objects.push_back(objectLibrary->getObjectFactory()->create(object_1)); //creats object
        objects.back()->initialize(engineData, player);
        if (objects.back()->getComponent<BodyComponent>()->getPosition().name == "Sword") {
            player->getComponent<InputComponent>()->weapon = objects.back();
            player->getComponent<PhysicsComponent>()->setRevolutionJoint(physicsDev->createRevolvingJoint(objects.back(), player, { -14.f, 20.f }, { -10.f, -4.f }, -20.f, true, -80.f, -20.f, true, 200.f, -10000.f, false));
            player->getComponent<InputComponent>()->weaponJoint = player->getComponent<PhysicsComponent>()->getRevolutionJoint();
            gameWon = &objects.back()->getComponent<PhysicsComponent>()->gameWon;
        }
        else {
            if (objects.back()->getComponent<PhysicsComponent>() != nullptr)
                objects.back()->removeObject();
            objects.pop_back();
        }
        object_1 = object_1->NextSiblingElement(); //goes to next object
    }

    tDevice->addTextTag("RegularSmall", 255, 0, 255, 15, 180, "Help us hero!", true);
    tDevice->addTextTag("RegularSmall", 255, 0, 255, 12, 190, "A monster pirate has taken", true);
    tDevice->addTextTag("RegularSmall", 255, 0, 255, 12, 200, "over the land with a robot army", true);
    tDevice->addTextTag("RegularSmall", 255, 0, 255, 12, 210, "go! Defeat him and bring peace", true);


    switch (curMapNum) {
    case 1:
        //Map!!
        if (spriteDoc.LoadFile(paths["mapPath"].c_str()) != tinyxml2::XML_SUCCESS)
        {
            std::cout << "ERROR::ENGINE::MAP XML FILE COULD NOT LOAD \n" << paths["mapPath"];
            exit(1);
        }
        break;
    case 2:
        //Map!!
        if (spriteDoc.LoadFile(paths["mapPath2"].c_str()) != tinyxml2::XML_SUCCESS)
        {
            std::cout << "ERROR::ENGINE::MAP XML FILE COULD NOT LOAD \n" << paths["mapPath2"];
            exit(1);
        }
        break;
    default:
        if (spriteDoc.LoadFile(paths["mapPath"].c_str()) != tinyxml2::XML_SUCCESS)
        {
            std::cout << "ERROR::ENGINE::MAP XML FILE COULD NOT LOAD \n" << paths["mapPath"];
            exit(1);
        }
        break;
    }

    tinyxml2::XMLElement* mapRoot = spriteDoc.FirstChildElement("Level"); //root of xml

    map->initialize(objects, engineData, mapRoot);

}
void Engine::saveLevel() {
    //Sprite does not need saving because it will not edited during gameplay
   
    //levelsave
    //tinyxml2::XMLElement* level = levelDoc.FirstChildElement("Level"); //level
    //    tinyxml2::XMLElement* object = level->FirstChildElement(); //object 1
    //    player->save(object);
    //   
    //    
    //
    //levelDoc.SaveFile(paths["levelPath"].c_str()); //save file
}

void Engine::createLevel(const char* name)
{
    //Creates a level witha  new name that automatically inits the player. Not sure this staying just seems something that might be useful in the future
    tinyxml2::XMLNode* level = levelDoc.NewElement("Level"); //leveld
        level->SetValue(name);
        tinyxml2::XMLElement* object_1 = levelDoc.NewElement("Object"); //Object 1
            object_1->SetAttribute("type", "Player");
            tinyxml2::XMLElement* object_1_element_1 = object_1->InsertNewChildElement("Body"); //Body of object 1
                object_1_element_1->SetAttribute("x", 5.f); 
                object_1_element_1->SetAttribute("y", 5.f);
                object_1_element_1->SetAttribute("angle", 90.f);
                object_1->InsertEndChild(object_1_element_1);
            level->InsertEndChild(object_1); //end object 1
    levelDoc.InsertEndChild(level); //end level
}

void Engine::update() {
    //std::cout << right->GetFixtureList()->GetFilterData().categoryBits << "\n";
    if (*nextLevel) {
        if (curMapNum < 2) {
            health = player->getComponent<AttributeComponent>()->health;
            reset();
            curMapNum++;
            *nextLevel = false;
            std::cout << "new Level added !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n";
            tinyxml2::XMLElement* root = levelDoc.FirstChildElement("Level"); //root of xml
            loadMap(root);
            return;
        }
        //gamemover
    }
    if (player != nullptr) {
    if (player->getComponent<AttributeComponent>()->isDead || *gameWon)
    {
        gameOver = true;
    }

   


  
        physicsDev->update(dt);
        inputDev->update();
        main_view->update(physicsDev->getPosition(*player), gDevice);
        // player->getComponent<InputComponent>()->handleEvent(inputDev);
        auto i = objects.begin();
        while (i != objects.end())
        {
            if (i->get()->getComponent<InputComponent>() != nullptr)
                i->get()->getComponent<InputComponent>()->handleEvent(inputDev);

            if (i->get()->update() == nullptr) //deletes if object returns nullptr
            {
                i = objects.erase(i);
            }
            else
            {
                i++;
            }
            //
            //Conduct the update (i.e., physics/animation)
            //
        }
    }else
    {
        inputDev->update();
    }
}

void Engine::draw() {
    gDevice->Begin();
    
    if (player != nullptr) {
    background->draw(main_view);
        player->draw(main_view);
        for (int i = 2; i < objects.size(); i++) {
            objects.at(i)->draw(main_view);
        }
    }

    playerGui->draw();
    tDevice->draw();
    

    //End the frame and draw to window
    gDevice->Present();

}
bool Engine::run() {

    if(gameOver)
    {
        aDevice->stopMusic();
        if (*gameWon)
        {
            tDevice->addTextTag("OverFont", 0, 255, 0, 140, 225, "GAME WON", false);
            aDevice->playMusic("EndCredits", 0);
        }
        else {

          
            tDevice->addTextTag("OverFont", 255, 0, 0, 140, 225, "GAME OVER", false);
            aDevice->playChunk("GameOver", 0);
            aDevice->playMusic("GameOverM", 0);
        }
        player = nullptr;
        reset();
        gameOver = false;
       return true;
    }
 

        //Game state updates complete, let's draw

     //Buffer the Frames per second (if necessary)
     //Handles events
        fps->reset();




        //updates objects and screen
        update();

        //draws objects and screen
        draw();

   
    //Makes sure fps doesn't go too high
        fps->fpsRegulate();
    
    if (inputDev->getEvent(InputDevice::UserInputs::QUIT)) {
       //player->getComponent<BodyComponent>()->setPosition(10.f, 10.f, 0.f); //temp solution, moves player to the starting pos
        saveLevel();
        return false;
    }
    return true;
}

void Engine::reset(bool full) {

    for(auto& i : objects)
    {
        physicsDev->removeObject(*i);
        physicsDev->world->ClearForces();
    }
    physicsDev->destroyWorld();
    physicsDev->initialize();
        //Nothing else needed since we use smart pointers
        if (!objects.empty()) {
            objects.clear();
            objects.resize(0);
        }
    
    if(!borders.empty())
    {
        borders.clear();
    }
}