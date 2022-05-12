#pragma once

class GraphicsDevice;

class rectangle
{
public:
	rectangle(int x, int y, int w, int h, SDL_Surface* screenSurface, Uint8 r, Uint8 g, Uint8 b);

	Uint8 r, g, b;
	void update(int x, int y);
	void draw(std::shared_ptr<GraphicsDevice> gDevice, SDL_Surface* screenSurface, int w);
	SDL_Rect rect;

};

