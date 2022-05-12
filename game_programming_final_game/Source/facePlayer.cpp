#include "pch.h"
#include "facePlayer.h"
#include "NPC.h"
#include "Object.h"
#include "BodyComponent.h"
#include "PhysicsComponent.h"
#include "enemyMovement.h"

facePlayer::facePlayer(std::shared_ptr<BehaviorTree> tree, std::shared_ptr<Task> control) : LeafTask(tree, control)
{
	
}

facePlayer::~facePlayer()
{
}

bool facePlayer::initiailize(bool conditional, Vector2D& goal)
{
	this->conditional = conditional;
	this->goal = &goal;
	status = FRESH;
	return false;
}

void facePlayer::run()
{
	if (conditional)
	{
			Vector2D enemyPos = owner->getOwner()->getComponent<PhysicsComponent>()->phyDev->getPosition(*owner->getOwner());

			if (abs(enemyPos.x - goal->x) > abs(enemyPos.y - goal->y))
			{
				if (enemyPos.x - goal->x > 0) // enemy to the right of the player
				{
					owner->setDirection(NPCFacings::NPC_LEFT);
				}
				else
				{
					owner->setDirection(NPCFacings::NPC_RIGHT);
				}
			}
			else if (enemyPos.y - goal->y > 0) //Enemy Is below player
			{
				owner->setDirection(NPCFacings::NPC_UP);
			}
			else
			{
				owner->setDirection(NPCFacings::NPC_DOWN);
			}
		success();
	}
	else
		fail();
}

bool facePlayer::addChildToTask(std::shared_ptr<Task> childTask)
{
	return false;
}

void facePlayer::setConditional(bool conditional)
{
	this->conditional = conditional;
}
