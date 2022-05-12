#pragma once
#include "Object.h"

class Library;
class Enemy;


//MAKE ENEMY SPAWNER COMPONENT 
//move all enemy spawner functionallity into component
//this class should be able to be entirely empty after deleting code that is coppied into component
//class also needs to be added to objectfactory presets and xml file with components
class EnemySpawner : public Object 
{
public:
	EnemySpawner(float x, float y, float angle, std::string name);
	~EnemySpawner();



	std::unique_ptr<Object> update();
	void draw(std::shared_ptr<View> view);
	void handleEvent(std::shared_ptr<InputDevice> input_dev);
	void initialize(std::shared_ptr<Texture> texture, std::shared_ptr<GraphicsDevice> g_device, std::shared_ptr<Library> objectLibrary, tinyxml2::XMLElement* objectElement);
private:
	
};

