#ifndef TEXTURE_H
#define TEXTURE_H

struct SDL_Texture;

class Texture {

public:
	//Initializes variables
	Texture();

	//Deallocates memory
	~Texture();

	//Loads image at specified path
	bool load(SDL_Renderer* renderer, std::string path);

	//Deallocates texture
	void free();

	//Renders texture at given point
	void render(SDL_Renderer* renderer, int x, int y, SDL_Rect* clip = NULL);
	void renderEx(SDL_Renderer* renderer, int x, int y, float angle, SDL_Rect* clip = NULL, SDL_Point* view_center = NULL);

	//Gets image dimensions
	int getWidth();
	int getHeight();

private:

	//The actual hardware texture
	SDL_Texture* texture;

	//Image dimensions
	int width;
	int height;

};

#endif