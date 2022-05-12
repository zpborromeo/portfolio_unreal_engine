#include "pch.h"
#include "EnemySpawnerComponent.h"
#include "Object.h"
#include "InputComponent.h"
#include "GraphicsDevice.h"
#include "ObjectFactory.h"
#include "InputDevice.h"
#include "Texture.h"
#include "Library.h"
#include "BodyComponent.h"
#include "PhysicsComponent.h"
#include "PhysicsDevice.h"
#include "EngineData.h"
#include "AudioDevice.h"

EnemySpawnerComponent::EnemySpawnerComponent(int number_of_enemies, std::shared_ptr<Object> owner)
	: Component(owner)
{
	maxNumEnemies = number_of_enemies;
	currNumEnemies = maxNumEnemies;
	enemies.reserve(maxNumEnemies);
	spawnPosition.x = 0; spawnPosition.y = 0;
}

bool EnemySpawnerComponent::initialize(std::shared_ptr<EngineData> initData, std::shared_ptr<Object> player)
{
	engineData = initData;
	this->player = player;
	//objectElement = objectElement->NextSiblingElement("Enemy");
	//creates enemies
	spawnPosition = owner->getComponent<BodyComponent>()->getPosition();
	for (int i = 0; i < maxNumEnemies; i++) {
		enemies.emplace_back(engineData->objectLibrary->getObjectFactory()->create("Enemy")); //creates object
		enemies.back()->getComponent<PhysicsComponent>()->phyDev->setPosition(*enemies.back(), spawnPosition);
		enemies.back()->getComponent<BodyComponent>()->setPosition(spawnPosition.x, spawnPosition.y, 0);
	}
	//init
	for (auto& i : enemies)
	{
		i->initialize(engineData, player);
	}
	return true;
}

std::shared_ptr<Object> EnemySpawnerComponent::update()
{
	if(currNumEnemies == 0)
	{
		enemies.reserve(maxNumEnemies);
	 //eventually do a timer
		for (int i = 0; i < maxNumEnemies; i++) {
			enemies.emplace_back(engineData->objectLibrary->getObjectFactory()->create("Enemy")); //creates object
			enemies.back()->initialize(engineData, player);
			enemies.back()->getComponent<PhysicsComponent>()->phyDev->setPosition(*enemies.back(), spawnPosition);
			enemies.back()->getComponent<BodyComponent>()->setPosition(spawnPosition.x, spawnPosition.y, 0);
		}

		currNumEnemies = maxNumEnemies;
	}
	else {
		float j = 0.f;
		int k = 0;
		auto i = enemies.begin();
		while (i != enemies.end())
		{
			if (i->get()->update() == nullptr) //deletes if object returns nullptr
			{
				engineData->aDevice->playChunk("enemyDeath", 0, 5);
				i = enemies.erase(i);
				--currNumEnemies;
			}
			else
			{
				i++;
			}
			//
			//Conduct the update (i.e., physics/animation)
			//
		}
	}
	return owner;
}

void EnemySpawnerComponent::draw(std::shared_ptr<View> view)
{
	for (auto& i : enemies)
	{
		i->draw(view);
	}
}

void EnemySpawnerComponent::handleEvent(std::shared_ptr<InputDevice> input_dev)
{
	for (auto& i : enemies)
	{
		i->getComponent<InputComponent>()->handleEvent(input_dev);
	}
}
