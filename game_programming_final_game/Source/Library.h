#pragma once
class ObjectFactory;
class Texture;
class GraphicsDevice;
class PhysicsDevice;
#include "../Thirdparty/SDL2_ttf/include/SDL_ttf.h"


class Library
{

public:

	Library();
	~Library();
	void loadTextures(GraphicsDevice& gDevice, std::shared_ptr<PhysicsDevice> physicsDev, tinyxml2::XMLElement* objectElement);
	void loadFonts(tinyxml2::XMLElement* objectElement);
	std::shared_ptr<ObjectFactory> getObjectFactory();
	std::shared_ptr<Texture> findTexture(std::string textureName);
	TTF_Font* findFont(std::string textureName);
private:
	std::shared_ptr<ObjectFactory> objectFactory;
	std::map<std::string, std::shared_ptr<Texture>> artLibrary;

	std::map<std::string, TTF_Font*> fontLibrary;
};