#include "pch.h"
#include "PlayerGui.h"
#include "GraphicsDevice.h"
#include "Object.h"
#include "AttributeComponent.h"
#include "Rectangle.h"

//===============================RECTANGLE============================================ 



//================================PlayerGUI====================================
PlayerGui::PlayerGui(std::shared_ptr<EngineData> initData, std::shared_ptr<Object> player)
{
	ac = player->getComponent<AttributeComponent>();
	backWidth = 100;
	frontWidth = backWidth;

	gDevice = initData->gDevice;
	surface = SDL_GetWindowSurface(initData->gDevice->getWindow());
	healthBack = std::make_unique<rectangle>(8, 8, backWidth+4, 44, surface, 220, 220, 220);
	healthFront = std::make_unique<rectangle>(10, 10, frontWidth, 40, surface, 255, 0, 0);
}

void PlayerGui::draw()
{
	
	frontWidth = (int)((float)((float)ac->health / (float)ac->maxHealth) * backWidth);
	healthBack->draw(gDevice, surface, backWidth+4);
	healthFront->draw(gDevice, surface, frontWidth);
}

void PlayerGui::setAc(AttributeComponent* attributeComponent)
{
	ac = attributeComponent;
}
