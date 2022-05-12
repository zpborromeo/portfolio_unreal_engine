#include "pch.h"
#include "SpriteComponent.h"
#include "Texture.h"
#include "GraphicsDevice.h"
#include "View.h"
#include "Object.h"
#include "BodyComponent.h"
#include "PhysicsComponent.h"
#include "Library.h"
#include "presets.h"



SpriteComponent::SpriteComponent(std::shared_ptr<SpritePresets> initializer, std::shared_ptr<GraphicsDevice> g_device, std::shared_ptr<Object> owner)
	: Component(owner), 
	ANIM_LAG(initializer->ANIM_LAG), ANIM_SIZE(initializer->ANIM_SIZE),
	NUM_SPRITES(initializer->NUM_SPRITES), 
	SPRITE_HEIGHT(initializer->SPRITE_HEIGHT), SPRITE_WIDTH(initializer->SPRITE_WIDTH), 
	SPRITE_SHEET_NCOLS(initializer->SPRITE_SHEET_NCOLS), SPRITE_SHEET_NROWS(initializer->SPRITE_SHEET_NROWS)
{
	if (NUM_SPRITES == 1)
	{
		Animation[0] = 0;
	}
	else {
		Animation[0] = 6; Animation[1] = 7; Animation[2] = 8;
	}
		//Construct clipping sequence
		for (int i = 0; i < NUM_SPRITES; i++) {

			int row = i / SPRITE_SHEET_NCOLS;
			int col = i % SPRITE_SHEET_NCOLS;

			clipArray[i].x = col * SPRITE_WIDTH;
			clipArray[i].y = row * SPRITE_HEIGHT;
			clipArray[i].w = SPRITE_WIDTH;
			clipArray[i].h = SPRITE_HEIGHT;
		}

		stepCount = 0;
		stepLagCount = 0;
		spriteID = 0;
	



	this->texture = initializer->spriteTexture;
	gDevice = g_device;
}

void SpriteComponent::initialize(std::shared_ptr<Texture> texture, std::shared_ptr<GraphicsDevice> g_device, std::shared_ptr<Library> objectLibrary, tinyxml2::XMLElement* objectElement)
{
	//FIXME
}

std::shared_ptr<Object> SpriteComponent::update()
{
	if (NUM_SPRITES != 1)
	{
		stepLagCount++;
		stepLagCount %= ANIM_LAG;
		if (stepLagCount == 0)
		{
			stepCount++;
			stepCount %= ANIM_SIZE;
			spriteID = Animation[stepCount];
		}
	}
		return owner;
}

void SpriteComponent::draw(std::shared_ptr<View> view)
{	
	SDL_Point viewPoint = { (int)view->position.x, (int)view->position.y };
	Vector2D ownerPos = owner->getComponent<PhysicsComponent>()->phyDev->getPosition(*owner);
	texture->renderEx(gDevice->getRenderer(), (int)(ownerPos.x - view->center.x - owner->getComponent<PhysicsComponent>()->getOffset().x), (int)(ownerPos.y - view->center.y - owner->getComponent<PhysicsComponent>()->getOffset().y), ownerPos.angle, &clipArray[spriteID], NULL);
}

void SpriteComponent::animationChange(int index_0, int index_1, int index_2)
{
	Animation[0] = index_0; Animation[1] = index_1; Animation[2] = index_2;
}

const std::shared_ptr<Texture> SpriteComponent::getTexture()
{
	return texture;
}

Vector2D SpriteComponent::getSize()
{
	Vector2D size;
	size.x = (float)SPRITE_WIDTH;
	size.y = (float)SPRITE_HEIGHT;
	return size;
}
