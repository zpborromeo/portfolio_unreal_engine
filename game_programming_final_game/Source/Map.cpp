#include "pch.h"
#include "Map.h"
#include "Texture.h"
#include "GraphicsDevice.h"
#include "PhysicsDevice.h"
#include "Object.h"
#include "Library.h"
#include "ObjectFactory.h"
#include "PhysicsComponent.h"
#include "BodyComponent.h"
#include "SpriteComponent.h"

Map::Map()
{
    
}


bool Map::initialize(std::vector<std::shared_ptr<Object>>& objects, std::shared_ptr<EngineData> engineData, tinyxml2::XMLElement* objectElement) {
    tileSize = objectElement->IntAttribute("tileSize");
    mapSise = objectElement->IntAttribute("mapSize");
    tinyxml2::XMLElement* block = objectElement->FirstChildElement(); //First object

    while (block) { //loops until no more objects exist
        objects.push_back(engineData->objectLibrary->getObjectFactory()->create(block->Attribute("name"))); //creats object
        if (objects.back()->getComponent<PhysicsComponent>() != nullptr) {
            objects.back()->initialize(engineData, objects.at(0));
            engineData->pDevice->setPosition(*objects.back(), Vector2D(block->FloatAttribute("x"), block->FloatAttribute("y")));
            objects.back()->getComponent<SpriteComponent>()->animationChange(0, 0, 0);
        }
        else
        {
            objects.back()->getComponent<BodyComponent>()->setPosition(block->FloatAttribute("x"), block->FloatAttribute("y"), 0);
            objects.back()->initialize(engineData, objects.at(0));
        }
        block = block->NextSiblingElement(); //goes to next object

    }

    return true;
}


