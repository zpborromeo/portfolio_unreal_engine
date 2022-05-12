#include "pch.h"
#include "ObjectFactory.h"
#include "ComponentsList.h"
#include "PhysicsDevice.h"
#include "Texture.h"
#include "Object.h"
#include "GraphicsDevice.h"
#include "Library.h"

ObjectFactory::ObjectFactory() {};
ObjectFactory::ObjectFactory(GraphicsDevice& gDevice, Library& assetLibrary, std::shared_ptr<PhysicsDevice> physics_dev)
	: physicsDev(physics_dev)
{
	this->gDevice = std::make_shared<GraphicsDevice>(gDevice);
	this->assetLibrary = std::make_shared<Library>(assetLibrary);
};

std::shared_ptr<Object> ObjectFactory::create(tinyxml2::XMLElement* objectElement)
{
	std::shared_ptr<ObjectFactoryPresets> presets = createPresetsFromXML(objectElement);
	std::shared_ptr<Object> newObject = create(presets);
	return newObject;
}

std::shared_ptr<Object> ObjectFactory::create(std::shared_ptr<ObjectFactoryPresets> presets)
{
	std::shared_ptr<Object> newObject = std::make_shared<Object>();
	if (presets->spriteInitializers->created) {
		newObject->addComponent(std::make_shared<SpriteComponent>(presets->spriteInitializers, gDevice, newObject));
	}
	if (presets->bodyInitializers->created) {
		std::shared_ptr<BodyPresets> bp = presets->bodyInitializers;
		newObject->addComponent(std::make_shared<BodyComponent>(bp->x, bp->y, bp->angle, bp->name,  newObject));
	}
	if (presets->physicsInitializer->created) {
		newObject->addComponent(std::make_shared<PhysicsComponent>(physicsDev, presets->physicsInitializer->bodyPhysics, newObject));
	}
	if (presets->inputInitializers->created) {
		newObject->addComponent(std::make_shared<InputComponent>(newObject));
	}
	if (presets->spawnerInitializers->created) {
		newObject->addComponent(std::make_shared<EnemySpawnerComponent>(presets->spawnerInitializers->numEnemies, newObject));
	}
	if (presets->NPCInitializer->created) {
		newObject->addComponent(std::make_shared<NPC>(newObject, presets->NPCInitializer->behaviorPresets));
	}
	if (presets->enemyMovementInitializer->created) {
		newObject->addComponent(std::make_shared<enemyMovement>(newObject, presets->enemyMovementInitializer->maxVelocity));
	}
	if(presets->AttributeInitializer->created)
	{
		newObject->addComponent(std::make_shared<AttributeComponent>(presets->AttributeInitializer->level, presets->AttributeInitializer->levelMax, newObject));
	}
	if (presets->CombatInitializer->created)
	{
		newObject->addComponent(std::make_shared<CombatComponent>(newObject));
	}
	if (presets->EnemyGuiInitializer->created)
	{
		newObject->addComponent(std::make_shared<enemyGui>(newObject));
	}

	// Use presents to create new object with the desired components and initialize their properties
	return newObject;
}

std::shared_ptr<Object> ObjectFactory::create(std::string objName) {	
	std::shared_ptr<ObjectFactoryPresets> presets = objectNames[objName];
	std::shared_ptr<Object> newObject = create(presets);

	// Use presents to create new object with the desired components and initialize their properties
	return newObject;
}

std::shared_ptr<ObjectFactoryPresets> ObjectFactory::createPresetsFromXML(tinyxml2::XMLElement* objectElement)
{
	std::shared_ptr<ObjectFactoryPresets> presets = std::make_shared<ObjectFactoryPresets>();
	for (tinyxml2::XMLElement* componentElement = objectElement->FirstChildElement(); componentElement; componentElement = componentElement->NextSiblingElement()) {
		std::string componentName = componentElement->Attribute("type");

		if (componentName == "Sprite") {
			addSpritePresets(presets->spriteInitializers, componentElement);
		}
		else if (componentName == "Body") {
			addBodyPresets(presets->bodyInitializers, componentElement);
		}
		else if (componentName == "Input") {
			addInputPresets(presets->inputInitializers, componentElement);
		}
		else if (componentName == "Spawner") {
			addSpawnerPresets(presets->spawnerInitializers, componentElement);
		}
		else if (componentName == "EnemyMovement") {
			addEnemyMovementPresets(presets->enemyMovementInitializer, componentElement);
		}
		else if (componentName == "Physics") {
			addPhysicsPresets(presets->physicsInitializer, componentElement);
		}
		else if (componentName == "NPC")
		{
			addNPCPresets(presets->NPCInitializer, componentElement);
		}
		else if (componentName == "Attribute")
		{
			addAttributePresets(presets->AttributeInitializer, componentElement);
		}
		else if (componentName == "Boss")
		{
			addBossPresets(presets->BossInitializer, componentElement);
		}
		else if (componentName == "Combat")
		{
			addCombatPresets(presets->CombatInitializer, componentElement);
		}
		else if (componentName == "EnemyGui")
		{
			addEnemyGuiPresets(presets->EnemyGuiInitializer, componentElement);
		}

		// Load presents from xml related to other components here 
	}
	objectNames[objectElement->Attribute("type")] = presets;
	return presets;
}

void ObjectFactory::addSpritePresets(std::shared_ptr<SpritePresets> preset, tinyxml2::XMLElement* componentElement)
{
	 preset->created = true;
	 componentElement->QueryIntAttribute("ANIM_LAG", (int*)(&preset->ANIM_LAG));
	 componentElement->QueryIntAttribute("ANIM_SIZE", (int*)(&preset->ANIM_SIZE));
	 componentElement->QueryIntAttribute("NUM_SPRITES", (int*)(&preset->NUM_SPRITES));
	 componentElement->QueryIntAttribute("SPRITE_HEIGHT", (int*)(&preset->SPRITE_HEIGHT));
	 componentElement->QueryIntAttribute("SPRITE_WIDTH", (int*)(&preset->SPRITE_WIDTH));
	 componentElement->QueryIntAttribute("SPRITE_SHEET_NCOLS", (int*)(&preset->SPRITE_SHEET_NCOLS));
	 componentElement->QueryIntAttribute("SPRITE_SHEET_NROWS", (int*)(&preset->SPRITE_SHEET_NROWS));
	 preset->spriteTexture = assetLibrary->findTexture(componentElement->Attribute("spriteTexture"));
}

void ObjectFactory::addBodyPresets(std::shared_ptr<BodyPresets> preset, tinyxml2::XMLElement* componentElement)
{	
	preset->created = true;
	componentElement->QueryFloatAttribute("x", (float*)(&preset->x));
	componentElement->QueryFloatAttribute("y", (float*)(&preset->y));
	componentElement->QueryFloatAttribute("angle", (float*)(&preset->angle));
	preset->name = componentElement->Attribute("name");
}

void ObjectFactory::addInputPresets(std::shared_ptr<InputPresets> preset, tinyxml2::XMLElement* componentElement)
{
	preset->created = true;
}
void ObjectFactory::addPhysicsPresets(std::shared_ptr<PhysicsPresets> presets, tinyxml2::XMLElement* componentElement)
{
	presets->created = true;
	componentElement->QueryIntAttribute("bodyType", (int*)&presets->bodyPhysics.bodyType);
	componentElement->QueryIntAttribute("objectShape", (int*)&presets->bodyPhysics.objectShape);
	componentElement->QueryFloatAttribute("density", &presets->bodyPhysics.density);
	componentElement->QueryFloatAttribute("friction", &presets->bodyPhysics.friction);
	componentElement->QueryFloatAttribute("restitution", &presets->bodyPhysics.restitution);
	componentElement->QueryFloatAttribute("angularDamping", &presets->bodyPhysics.angularDamping);
	componentElement->QueryFloatAttribute("linearDamping", &presets->bodyPhysics.linearDamping);
	componentElement->QueryFloatAttribute("force", &presets->bodyPhysics.force);
	componentElement->QueryFloatAttribute("angle", &presets->bodyPhysics.angle);
	componentElement->QueryFloatAttribute("spinSpeed", &presets->bodyPhysics.spinSpeed);
	componentElement->QueryBoolAttribute("bullet", &presets->bodyPhysics.bullet);
	componentElement->QueryBoolAttribute("physicsOn", &presets->bodyPhysics.physicsOn);
	componentElement->QueryBoolAttribute("fixedRotation", &presets->bodyPhysics.fixedRotation);
	componentElement->QueryFloatAttribute("offsetX", &presets->bodyPhysics.offsetX);
	componentElement->QueryFloatAttribute("offsetY", &presets->bodyPhysics.offsetY);
	componentElement->QueryIntAttribute("hitBoxX", &presets->bodyPhysics.hitBoxX);
	componentElement->QueryIntAttribute("hitboxY", &presets->bodyPhysics.hitBoxY);
	componentElement->QueryIntAttribute("category", (int*)(&presets->bodyPhysics.category));
	componentElement->QueryIntAttribute("mask", (int*)(&presets->bodyPhysics.mask));
	switch(presets->bodyPhysics.mask)
	{
	case(1):
		presets->bodyPhysics.mask = MASK_PLAYER;
		break;
	case(2):
		presets->bodyPhysics.mask = MASK_WEAPON;
		break;
	case(4):
		presets->bodyPhysics.mask = MASK_ENEMY;
		break;
	case(8):
		presets->bodyPhysics.mask = MASK_WALL;
		break;
	case(16):
		presets->bodyPhysics.mask = MASK_NPC;
		break;
	case(64):
		presets->bodyPhysics.mask = MASK_BOSS;
		break;
	}

}
void ObjectFactory::addSpawnerPresets(std::shared_ptr<SpawnerPresets> preset, tinyxml2::XMLElement* componentElement)
{
	preset->created = true;
	componentElement->QueryIntAttribute("numEnemies", (int*)(&preset->numEnemies));
	componentElement->QueryFloatAttribute("spawnTime", (&preset->spawnTime));
}

void ObjectFactory::addNPCPresets(std::shared_ptr<NPCPresets> presets, tinyxml2::XMLElement* componentElement)
{
	presets->created = true;
	componentElement->QueryBoolAttribute("roaming", &presets->behaviorPresets["roaming"]);
	componentElement->QueryBoolAttribute("follow", &presets->behaviorPresets["follow"]);
	componentElement->QueryBoolAttribute("jump", &presets->behaviorPresets["jump"]);
}

void ObjectFactory::addAttributePresets(std::shared_ptr<AttributePresets> preset, tinyxml2::XMLElement* componentElement)
{
	preset->created = true;
	componentElement->QueryIntAttribute("level", (int*)(&preset->level));
	componentElement->QueryIntAttribute("levelMax", (int*)(&preset->levelMax));
}

void ObjectFactory::addEnemyMovementPresets(std::shared_ptr<EnemyMovementPresets> preset, tinyxml2::XMLElement* componentElement)
{
	preset->created = true;
	componentElement->QueryFloatAttribute("maxVelocity", (float*)(&preset->maxVelocity));
}

void ObjectFactory::addBossPresets(std::shared_ptr<BossPresets> preset, tinyxml2::XMLElement* componentElement)
{
	preset->created = true;
}

void ObjectFactory::addCombatPresets(std::shared_ptr<CombatPresets> preset, tinyxml2::XMLElement* componentElement)
{
	preset->created = true;
}

void ObjectFactory::addEnemyGuiPresets(std::shared_ptr<EnemyGuiPresets> preset, tinyxml2::XMLElement* componentElement)
{
	preset->created = true;
}
