#include "pch.h"
#include "enemyMovement.h"
#include "Object.h"
#include "BodyComponent.h"
#include "SpriteComponent.h"
#include "PhysicsComponent.h"
#include "Timer.h"

enemyMovement::enemyMovement(std::shared_ptr<Object> owner, float max_velocity)
	: Component(owner), maxVelocity(max_velocity)
{
	currentDirection = EnemyFacing::ENEMY_IDLE;

	keyTimer = std::make_unique<Timer>();
	keyTime = 1500.f;
	keyTimer->Initialize(keyTime);
	keyTimer->reset();
	keyTimer->start();
}

std::shared_ptr<Object> enemyMovement::update()
{
	float dir_x = 0;
	float dir_y = 0;

	if (currentDirection != EnemyFacing::ENEMY_IDLE) {
		//Acceleration
		if (currentDirection == EnemyFacing::ENEMY_DOWN)
		{
			owner->getComponent<SpriteComponent>()->animationChange(0, 1, 2);
			dir_y = 0.f;
		}
		else if (currentDirection == EnemyFacing::ENEMY_UP && keyTimer->getTicks() > keyTime)
		{
			keyTimer->resetTicks();
			dir_y = -20.f;
			Vector2D velocity(dir_x * acceleration, dir_y * acceleration);
			owner->getComponent<PhysicsComponent>()->phyDev->applyImpulse(*owner, velocity);
		}

		//X movement
		if (currentDirection == EnemyFacing::ENEMY_RIGHT)
		{
			owner->getComponent<SpriteComponent>()->animationChange(6, 7, 8);
			dir_x = 1.f;
		}
		else if (currentDirection == EnemyFacing::ENEMY_LEFT)
		{
			owner->getComponent<SpriteComponent>()->animationChange(3, 4, 5);
			dir_x = -1.f;
		}
	}
	else
	{
		owner->getComponent<SpriteComponent>()->animationChange(1, 1, 1);
	}

	Vector2D velocity(dir_x * acceleration, dir_y * acceleration);
	owner->getComponent<PhysicsComponent>()->phyDev->applyImpulse(*owner, velocity);
	//Deceleration 
	
	//	currentDirection = EnemyFacing::ENEMY_IDLE; //Idle When not moving
	
	return owner;
}

const EnemyFacing& enemyMovement::getEnemyFacing() const
{
	return currentDirection;
}

void enemyMovement::setFacingDirection(EnemyFacing newDirection)
{
	currentDirection = newDirection;
}
