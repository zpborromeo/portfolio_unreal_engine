#include "pch.h"
#include "enemyGui.h"
#include "Object.h"
#include "Rectangle.h"
#include "AttributeComponent.h"
#include "PhysicsComponent.h"
#include "SpriteComponent.h"
#include "GraphicsDevice.h"
#include "View.h"


enemyGui::enemyGui(std::shared_ptr<Object> owner)
	: Component(owner)
{
	ac = owner->getComponent<AttributeComponent>();
	pc = owner->getComponent<PhysicsComponent>();
	sc = owner->getComponent<SpriteComponent>();
	surface = nullptr;
	if(pc->getBodyPhysics().category == CATEGORY_BOSS)
		backWidth =  sc->getSize().x;
	else
		backWidth = (5.f/8.f) * sc->getSize().x;
	frontWidth = backWidth;

	
}

bool enemyGui::initialize(std::shared_ptr<EngineData> initData, std::shared_ptr<Object> player)
{
	gDevice = initData->gDevice;
	view = initData->view;
	surface = SDL_GetWindowSurface(initData->gDevice->getWindow());
	healthBack = std::make_unique<rectangle>(10,10, backWidth, sc->getSize().y / 8, surface, 220, 220, 220); //x and y will change
	healthFront = std::make_unique<rectangle>(10, 10, frontWidth, sc->getSize().y/8, surface, 255, 0, 0); //x and y will change
	return true;
}

std::shared_ptr<Object> enemyGui::update()
{
	int x = 0; int y = 0;
	if (pc->getBodyPhysics().category == CATEGORY_BOSS) {
		x = pc->getPosition().x - view->center.x - 30; y = pc->getPosition().y - view->center.y - 75.f;
	}
	else {
		x = pc->getPosition().x - view->center.x + sc->getSize().x / 5; y = pc->getPosition().y - view->center.y;
	}
	healthBack->update(x, y);
	healthFront->update(x, y);

	//losing health checker
	frontWidth = (int)((float)((float)ac->health / (float)ac->maxHealth) * backWidth);
	return owner;
}

void enemyGui::draw(std::shared_ptr<View> view)
{	
	healthBack->draw(gDevice, surface, backWidth + 1);
	healthFront->draw(gDevice, surface, frontWidth);
}
