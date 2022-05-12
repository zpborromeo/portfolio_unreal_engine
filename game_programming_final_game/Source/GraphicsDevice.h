/*
* Author:	Keith Bush
*			UALR
*
* Date:		January 31, 2015
*
* File:		GraphicsDevice.h
*
* Purpose:	Declaration of the SDL GraphicsDevice class
*/

#ifndef GRAPHICSDEVICE_H
#define GRAPHICSDEVICE_H

class GraphicsDevice
{

public:
	GraphicsDevice(Uint32, Uint32);
	~GraphicsDevice();
	bool Initialize(bool);
	bool ShutDown();
	void Begin();
	void Present();
	const Uint32 getWidth();
	const Uint32 getHeight();
	SDL_Window* getWindow();

	SDL_Renderer* getRenderer();

private:

	//Window(s) to display graphics
	SDL_Window* screen{ nullptr };
	SDL_Renderer* renderer{ nullptr };

	//Parameter
	const Uint32 SCREEN_WIDTH;
	const Uint32 SCREEN_HEIGHT;

};

#endif

