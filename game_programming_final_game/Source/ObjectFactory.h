#pragma once
#include "presets.h"

class Object;
class Texture;
class GraphicsDevice;
class PhysicsDevice;
class Library;

struct Initializers {
	
};

class ObjectFactory
{
public:
	ObjectFactory();
	ObjectFactory(GraphicsDevice &gDevice, Library &assetLibrary, std::shared_ptr<PhysicsDevice> physics_dev);
	std::shared_ptr<Object> create(tinyxml2::XMLElement* objectElement);
	std::shared_ptr<Object> create(std::shared_ptr<ObjectFactoryPresets> presets);
	std::shared_ptr<Object> create(std::string objName);
private:
	std::shared_ptr<GraphicsDevice> gDevice;
	std::shared_ptr<Library> assetLibrary;
	//Construct Physics
	std::shared_ptr<PhysicsDevice> physicsDev;

	std::shared_ptr<ObjectFactoryPresets> createPresetsFromXML(tinyxml2::XMLElement* objectElement);

	std::map <std::string, std::shared_ptr<ObjectFactoryPresets>> objectNames;

	//ADDING PRESETS FUNCTIONS
	void addSpritePresets(std::shared_ptr<SpritePresets> presets, tinyxml2::XMLElement* componentElement);
	void addBodyPresets(std::shared_ptr<BodyPresets> presets, tinyxml2::XMLElement* componentElement);
	void addInputPresets(std::shared_ptr<InputPresets> presets, tinyxml2::XMLElement* componentElement);
	void addPhysicsPresets(std::shared_ptr<PhysicsPresets> presets, tinyxml2::XMLElement* componentElement);
	void addSpawnerPresets(std::shared_ptr<SpawnerPresets> presets, tinyxml2::XMLElement* componentElement);
	void addNPCPresets(std::shared_ptr<NPCPresets> presets, tinyxml2::XMLElement* componentElement);
	void addAttributePresets(std::shared_ptr<AttributePresets> presets, tinyxml2::XMLElement* componentElement);
	void addEnemyMovementPresets(std::shared_ptr<EnemyMovementPresets> presets, tinyxml2::XMLElement* componentElement);
	void addBossPresets(std::shared_ptr<BossPresets> preset, tinyxml2::XMLElement* componentElement);
	void addCombatPresets(std::shared_ptr<CombatPresets> preset, tinyxml2::XMLElement* componentElement);
	void addEnemyGuiPresets(std::shared_ptr<EnemyGuiPresets> preset, tinyxml2::XMLElement* componentElement);
};

