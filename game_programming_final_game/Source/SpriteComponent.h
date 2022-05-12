#pragma once
#include "Component.h"
class Texture;
class GraphicsDevice;
class Library;
struct SpritePresets;


class SpriteComponent : public Component
{
public:
	SpriteComponent(std::shared_ptr<SpritePresets> initializer, std::shared_ptr<GraphicsDevice> g_device, std::shared_ptr<Object> owner);
	void initialize(std::shared_ptr<Texture> texture, std::shared_ptr<GraphicsDevice> g_device, std::shared_ptr<Library> objectLibrary, tinyxml2::XMLElement* objectElement);

	std::shared_ptr<Object> update();
	void draw(std::shared_ptr<View> view) override;
	void animationChange(int index_0, int index_1, int index_2);
	const std::shared_ptr<Texture> getTexture();
	Vector2D getSize();

private:
	std::shared_ptr<GraphicsDevice> gDevice;
	std::shared_ptr<Texture> texture;

	//const variables
	const int ANIM_LAG;
	const int ANIM_SIZE;

	const int NUM_SPRITES;
	const int SPRITE_HEIGHT;
	const int SPRITE_WIDTH;
	const int SPRITE_SHEET_NCOLS;
	const int SPRITE_SHEET_NROWS;


	//Animation
	SDL_Rect clipArray[12];
	Uint32 stepLagCount;
	Uint32 stepCount;
	Uint32 spriteID;
	int Animation[3];
};

