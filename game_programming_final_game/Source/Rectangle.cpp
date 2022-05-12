#include "pch.h"
#include "Rectangle.h"
#include "GraphicsDevice.h"

rectangle::rectangle(int x, int y, int w, int h, SDL_Surface* screenSurface, Uint8 r, Uint8 g, Uint8 b)
	: r(r), g(g), b(b)
{
	this->rect = { x, y, w, h };
	SDL_FillRect(screenSurface, &rect, SDL_MapRGB(screenSurface->format, r, g, b));
}


void rectangle::update(int x, int y)
{
	rect.x = x;
	rect.y = y;
}

void rectangle::draw(std::shared_ptr<GraphicsDevice> gDevice, SDL_Surface* screenSurface, int w)
{
	rect.w = w;
	SDL_SetRenderDrawColor(gDevice->getRenderer(), r, g, b, 255);
	SDL_FillRect(screenSurface, &rect, SDL_MapRGB(screenSurface->format, r, g, b));
	SDL_RenderFillRect(gDevice->getRenderer(), &rect);
	SDL_SetRenderDrawColor(gDevice->getRenderer(), 0, 0, 0, 255);
}

