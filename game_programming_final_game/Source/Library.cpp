#include "pch.h"
#include "Library.h"
#include "ObjectFactory.h"
#include "Texture.h"
#include "GraphicsDevice.h"
#include "PhysicsDevice.h"
#include "SDL_ttf.h"
/*Default Constructor
Sets pointer value, library, to a nullptr
*/
Library::Library(){}

/*Destructor
Deletes any pointers an instance of Library points to in order to clean/free
up memory and prevent memory leaks.
*/

Library::~Library() {
 
}

//
//Inits art Library with textures loaded from file.
//
void Library::loadTextures(GraphicsDevice& gDevice, std::shared_ptr<PhysicsDevice> physics_dev, tinyxml2::XMLElement* spriteRoot)
{
    //Textures are loaded here!
    tinyxml2::XMLElement* object_1 = spriteRoot->FirstChildElement("Object"); //First object
    tinyxml2::XMLElement* spritesheet;
    
    while (object_1) { //loops until no more objects exist
        //Makes texture ptr
        artLibrary[object_1->Attribute("type")] = std::make_shared<Texture>();
        spritesheet = object_1->FirstChildElement("SpriteSheet");
        //loads filepath into texture
        artLibrary[object_1->Attribute("type")]->load(gDevice.getRenderer(), spritesheet->Attribute("path"));
        object_1 = object_1->NextSiblingElement();
    }

    objectFactory = std::make_shared<ObjectFactory>(gDevice, *this, physics_dev);
}

void Library::loadFonts(tinyxml2::XMLElement* objectElement)
{
    tinyxml2::XMLElement* object_1 = objectElement->FirstChildElement("Object"); //First object
    tinyxml2::XMLElement* fontSheet;

    while (object_1) { //loops until no more objects exist
        //Makes font ptr
        fontSheet = object_1->FirstChildElement("Font");
        fontLibrary[object_1->Attribute("name")] =  TTF_OpenFont(fontSheet->Attribute("path"), fontSheet->Int64Attribute("fontsize"));
        object_1 = object_1->NextSiblingElement();
    }
}

std::shared_ptr<ObjectFactory> Library::getObjectFactory() {
    return objectFactory;
}

std::shared_ptr<Texture> Library::findTexture(std::string textureName) {
    return artLibrary.find(textureName)->second;
}

TTF_Font* Library::findFont(std::string textureName)
{
    return fontLibrary.find(textureName)->second;
}
