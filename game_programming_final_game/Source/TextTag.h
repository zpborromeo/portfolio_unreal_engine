#pragma once
#include "Timer.h"

class GraphicsDevice;

class TextTag 
{
public:
	TextTag(int r, int g, int b, int xPos, int yPos, TTF_Font* font, std::string message, bool destroy);
	bool draw(GraphicsDevice& gDevice);
private:

	bool destroy;
	int r, g, b;
	int xPos, yPos;
	int velocity;
	TTF_Font* font;
	std::shared_ptr<std::string> message;
	std::unique_ptr<Timer> fadeTimer;
	float fadeTime;
	int alphaValue;
};