#include "pch.h"
#include "TextTag.h"
#include "Timer.h"
#include "GraphicsDevice.h"

TextTag::TextTag(int r, int g, int b, int xPos, int yPos, TTF_Font* font, std::string message, bool destroy)
	: font(font), r(r), g(g), b(b), xPos(xPos), yPos(yPos), destroy(destroy)
{	
	this->message = std::make_shared<std::string>(message);
	fadeTimer = std::make_unique<Timer>();
	fadeTime = 610.f;
	fadeTimer->Initialize(fadeTime);
	fadeTimer->reset();
	fadeTimer->start();
	alphaValue = 255;
	velocity = -2;
}

bool TextTag::draw(GraphicsDevice& gDevice)
{
	if (destroy) {
		yPos += velocity;

		alphaValue = fadeTime - fadeTimer->getTicks();
		if (alphaValue > 255)
			alphaValue = 255;
		else if (alphaValue < 0)
		{
			return false;

		}
	}

	SDL_Surface* surface;
	SDL_Texture* texture;
	SDL_Rect textRect;

	SDL_Color textColor;
	textColor.r = r;
	textColor.g = g;
	textColor.b = b;
	textColor.a = alphaValue;
	surface = TTF_RenderText_Blended(font, message->c_str(), textColor);
	texture = SDL_CreateTextureFromSurface(gDevice.getRenderer(), surface);
	SDL_QueryTexture(texture, NULL, NULL, &surface->w, &surface->h);
	textRect.x = xPos; textRect.y = yPos; textRect.w = surface->w; textRect.h = surface->h;
	SDL_FreeSurface(surface);
	SDL_RenderCopyEx(gDevice.getRenderer(), texture, NULL, &textRect, 0, NULL, SDL_FLIP_NONE);

	SDL_DestroyTexture(texture);
	return true;
}
