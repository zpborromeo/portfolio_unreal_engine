#include "pch.h"
#include "jumpPlayer.h"
#include "NPC.h"
#include "Object.h"
#include "BodyComponent.h"
#include "PhysicsComponent.h"
#include "enemyMovement.h"
#include "Timer.h"

jumpPlayer::jumpPlayer(std::shared_ptr<BehaviorTree> tree, std::shared_ptr<Task> control) : LeafTask(tree, control)
{
	keyTimer = std::make_unique<Timer>();
	keyTime = 1500.f;
	keyTimer->Initialize(keyTime);
	keyTimer->reset();
	keyTimer->start();
}

jumpPlayer::~jumpPlayer()
{
}

bool jumpPlayer::initiailize(bool conditional, Vector2D& goal)
{
	this->conditional = conditional;
	this->goal = &goal;
	status = FRESH;
	return false;
}

void jumpPlayer::run()
{

	float dir_x = 0;
	float dir_y = 0;

	if (conditional && keyTimer->getTicks() > keyTime)
	{
		Vector2D enemyPos = owner->getOwner()->getComponent<PhysicsComponent>()->phyDev->getPosition(*owner->getOwner());

		
		if (enemyPos.x - goal->x > 0) // enemy to the right of the player
		{
			dir_x = -5.f;
			dir_y = -20.f;
			Vector2D velocity(dir_x * acceleration, dir_y * acceleration);
			owner->getOwner()->getComponent<PhysicsComponent>()->phyDev->applyImpulse(*(owner->getOwner()), velocity);
		}
		else // enemy to the left of the player
		{
			dir_x = 5.f;
			dir_y = -20.f;
			Vector2D velocity(dir_x * acceleration, dir_y * acceleration);
			owner->getOwner()->getComponent<PhysicsComponent>()->phyDev->applyImpulse(*(owner->getOwner()), velocity);
		}
		if (enemyPos.y - goal->y > 0) //Enemy Is below player
		{
			dir_y = -20.f;
			Vector2D velocity(dir_x * acceleration, dir_y * acceleration);
			owner->getOwner()->getComponent<PhysicsComponent>()->phyDev->applyImpulse(*(owner->getOwner()), velocity);
		}
		keyTimer->resetTicks();
		success();
	}
	else
		fail();
}

bool jumpPlayer::addChildToTask(std::shared_ptr<Task> childTask)
{
	return false;
}

void jumpPlayer::setConditional(bool conditional)
{
	this->conditional = conditional;
}