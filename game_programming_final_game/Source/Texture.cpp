#include "pch.h"
#include "Texture.h"

using namespace std;

Texture::Texture()
{
	width = 0;
	height = 0;
	texture = NULL;
}


Texture::~Texture()
{
	free();
}


bool Texture::load(SDL_Renderer* renderer, std::string path)
{

	//Destroy existing texture information
	free();

	//The image that's loaded
	SDL_Surface* surface = NULL;

	//Load the image
	surface = IMG_Load(path.c_str());

	//If the image loaded
	if (surface == NULL)
	{
		printf("Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError());

	}
	else
	{
		//Color key image
		SDL_SetColorKey(surface, SDL_TRUE, SDL_MapRGB(surface->format, 255, 0, 255));

		//Create an optimized image
		texture = SDL_CreateTextureFromSurface(renderer, surface);

		if (texture == NULL)
		{
			printf("Unable to create texture from image %s! SDL Error: %s\n", path.c_str(), SDL_GetError());

		}
		else
		{

			//Set the height and width from the texture
			SDL_QueryTexture(texture, NULL, NULL, &width, &height);

			//Free the loaded image; no longer needed
			SDL_FreeSurface(surface);

		}

	}

	return(texture != NULL);

}


void Texture::free()
{
	if (texture != NULL)
	{
		SDL_DestroyTexture(texture);
		texture = NULL;
		width = 0;
		height = 0;
	}
}


void Texture::render(SDL_Renderer* renderer, int x, int y, SDL_Rect* clip)
{

	//Set rendering space and render to screen
	SDL_Rect renderQuad = { x, y, width, height };

	//Set clip rendering dimensions
	if (clip != NULL)
	{
		renderQuad.w = clip->w;
		renderQuad.h = clip->h;
	}

	//Render to screen
	SDL_RenderCopy(renderer, texture, clip, &renderQuad);

}

void Texture::renderEx(SDL_Renderer* renderer, int x, int y, float angle, SDL_Rect* clip, SDL_Point* view_center)
{

	//Set rendering space and render to screen
	SDL_Rect renderQuad = { x, y, width, height };

	//Set clip rendering dimensions
	if (clip != NULL) {
		renderQuad.w = clip->w;
		renderQuad.h = clip->h;
	}

	//Render to screen
	SDL_RenderCopyEx(renderer, texture, clip, &renderQuad, angle, view_center, SDL_FLIP_NONE);

}

int Texture::getWidth() {
	return(width);
}

int Texture::getHeight()
{
	return(height);
}