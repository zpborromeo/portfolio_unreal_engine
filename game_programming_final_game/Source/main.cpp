#include "pch.h"
#include "Engine.h"
int main(int argc, char* argv[])
{	
	std::map<std::string, std::string> paths;
	
	paths["levelPath"] = "Assets/Test.xml";
	paths["spritePath"] = "Assets/spritesheets.xml";
	paths["fontPath"] = "Assets/Fonts.xml";
	paths["audioPath"] = "Assets/audioPaths.xml";
	paths["mapPath"] = "Assets/map.xml";
	paths["mapPath2"] = "Assets/map_2.xml";

	Engine engine(paths);
	while (engine.run()) {
	
	}


	return 0;
}