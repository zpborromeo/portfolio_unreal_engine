#pragma once
#include "EngineData.h"

class Texture;
class Object;
class GraphicsDevice;
class PhysicsDevice;
class Library;

class Map
{
public:
	Map();

	bool initialize(std::vector<std::shared_ptr<Object>>& objects, std::shared_ptr<EngineData> engineData, tinyxml2::XMLElement* objectElement);

private:

	Texture* background;
	int mapSise;
	int tileSize;
};

