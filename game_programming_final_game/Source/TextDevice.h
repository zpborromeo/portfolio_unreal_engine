#pragma once

class Library;
class GraphicsDevice;
class TextTag;

class TextDevice
{
public:
	TextDevice(std::shared_ptr<Library> objectLibrary, GraphicsDevice& gDevice);
	~TextDevice();


	bool addTextTag(std::string fontName, int r, int g, int b, int xPos, int yPos, std::string* message, bool destroy);
	bool addTextTag(std::string fontName, int r, int g, int b, int xPos, int yPos, std::string message, bool destroy);
	bool addTextTag(std::string fontName, int r, int g, int b, int xPos, int yPos, int message, bool destroy);

	void draw();
private:
	
	TTF_Font* font;
	GraphicsDevice& gDevice;
	std::vector<std::shared_ptr<TextTag>> tags;
	std::shared_ptr<Library> fontLibrary;

};

