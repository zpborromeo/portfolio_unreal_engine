/*
* Author:	Keith Bush
*			UALR
*
* Date:		January 31, 2015
*
* File:		GraphicsDevice.cpp
*
* Purpose:	Definition of the SDL GraphicsDevice class
*/

#include "pch.h"
#include "GraphicsDevice.h"

GraphicsDevice::GraphicsDevice(Uint32 width, Uint32 height) : SCREEN_WIDTH(width), SCREEN_HEIGHT(height)
{

}

GraphicsDevice::~GraphicsDevice()
{
	/*if(!ShutDown())
	{
	printf( "SDL could not shut down! SDL_Error: %s\n", SDL_GetError() );
	exit(1);
	}*/
}

bool GraphicsDevice::Initialize(bool fullScreen)
{

	//Initialize all SDL subsystems
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
		return(false);
	}

	//Initialize SDL_image subsystems
	if (!IMG_Init(IMG_INIT_PNG))
	{
		printf( "SDL_image could not initialize! SDL_Error: %s\n", IMG_GetError() );
		return(false);
	}

	if (!fullScreen)
	{
		//Construct and check window construction
		screen = SDL_CreateWindow("Demonstration Window",
			SDL_WINDOWPOS_UNDEFINED,
			SDL_WINDOWPOS_UNDEFINED,
			SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_FULLSCREEN);
	}
	else
	{
		screen = SDL_CreateWindow("Demonstration Window",
			SDL_WINDOWPOS_UNDEFINED,
			SDL_WINDOWPOS_UNDEFINED,
			SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	}
	if (screen == nullptr)
	{
		//printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
		return(false);
	}

	//Construct the renderer
	renderer = SDL_CreateRenderer(screen, -1, SDL_RENDERER_ACCELERATED);
	if (renderer == nullptr)
	{
		printf( "Renderer could not be created! SDL_Error: %s\n", SDL_GetError() );
		return(false);
	}

	//Set the background color (default)
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

	return(true);

}

bool GraphicsDevice::ShutDown()
{
	//Free renderer
	SDL_DestroyRenderer(renderer);
	renderer = nullptr;

	//Free the window
	SDL_DestroyWindow(screen);
	screen = nullptr;



	//Quit SDL Subsystems
	IMG_Quit();
	SDL_Quit();

	return(true);
}

void GraphicsDevice::Begin()
{
	SDL_RenderClear(renderer);
}

void GraphicsDevice::Present()
{
	SDL_RenderPresent(renderer);
}

const Uint32 GraphicsDevice::getWidth() {
	return SCREEN_WIDTH;
}

const Uint32 GraphicsDevice::getHeight() {
	return SCREEN_HEIGHT;
}

SDL_Window* GraphicsDevice::getWindow()
{
	return screen;
}

SDL_Renderer* GraphicsDevice::getRenderer()
{
	return(renderer);
}