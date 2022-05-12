#include "pch.h"
#include "Library.h"
#include "Engine.h"
#include "EnemySpawner.h"
#include "Enemy.h"
#include "EnemyObjectFactory.h"
#include "InputComponent.h"

EnemySpawner::EnemySpawner(float x, float y, float angle, std::string name)
{
	
}

EnemySpawner::~EnemySpawner()
{
}

std::unique_ptr<Object> EnemySpawner::update()
{
	

	return std::unique_ptr<Object>();
}

void EnemySpawner::draw(std::shared_ptr<View> view)
{

}

void EnemySpawner::handleEvent()
{
	
}

void EnemySpawner::initialize(std::shared_ptr<Texture> texture, std::shared_ptr<GraphicsDevice> g_device, std::shared_ptr<Library> objectLibrary, tinyxml2::XMLElement* objectElement)
{
	
}
