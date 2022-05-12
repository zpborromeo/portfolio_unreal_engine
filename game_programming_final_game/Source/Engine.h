#pragma once
#include "EngineData.h"

class Timer;
class Object;
class Library;
class View;
class InputDevice;
class GraphicsDevice;
class TextDevice;
class AudioDevice;
class PhysicsDevice;
class b2Body;
class Map;
class PlayerGui;

class Engine
{

public:

	Engine() = delete; //Default Constructor shouldn't be called
	Engine(std::map<std::string, std::string>& paths);
	~Engine();
	void loadLevel();
	void loadMap(tinyxml2::XMLElement* root);
	void saveLevel();
	void createLevel(const char* name);
	void update();
	void draw();
	bool run(); //this calls update and draw and returns false when game is over. it’s used by source.cpp
	void reset(bool full = true);


private:
	std::shared_ptr<EngineData> engineData;
	
	//Library
	std::shared_ptr<Library> objectLibrary;
	
	//Objects
	std::vector<std::shared_ptr<Object>> objects;
	std::shared_ptr<Object> player;
	std::shared_ptr<Object> Boss;
	std::shared_ptr<Object> background;
	bool updatePlayer;

	//XML
	tinyxml2::XMLDocument levelDoc;
	tinyxml2::XMLDocument spriteDoc;
	tinyxml2::XMLDocument fontDoc;
	tinyxml2::XMLDocument audioDoc;
	std::map<std::string, std::string> paths;
	
	//Devices
	std::shared_ptr<GraphicsDevice> gDevice;
	std::shared_ptr<TextDevice> tDevice;
	std::shared_ptr<AudioDevice> aDevice;
	std::unique_ptr<Timer> fps;
	std::shared_ptr<InputDevice> inputDev;
	std::shared_ptr<View> main_view;
	std::shared_ptr<PhysicsDevice> physicsDev;
	std::shared_ptr<PlayerGui> playerGui;

	//Variables
	Vector2D Gravity;
	const float dt = 1/100.f;
	std::shared_ptr<Map> map;

	std::vector<b2Body*> borders;
	b2Body* right;
	std::shared_ptr<bool> nextLevel;
	bool gameOver;
	bool* gameWon;
	int curMapNum;
	int health;
};

