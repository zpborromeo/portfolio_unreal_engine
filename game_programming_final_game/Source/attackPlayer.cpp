#include "pch.h"
#include "attackPlayer.h"
#include "NPC.h"
#include "Object.h"
#include "BodyComponent.h"
#include "PhysicsComponent.h"
#include "enemyMovement.h"

attackPlayer::attackPlayer(std::shared_ptr<BehaviorTree> tree, std::shared_ptr<Task> control) : LeafTask(tree, control)
{

}

attackPlayer::~attackPlayer()
{
}

bool attackPlayer::initiailize(bool conditional, Vector2D& goal)
{
	this->conditional = conditional;
	this->goal = &goal;
	status = FRESH;
	return false;
}

//attack method or something
void attackPlayer::run()
{
	if (conditional)
	{
		success();
		//FILL IN LATER
	}
	else
		fail();
}

bool attackPlayer::addChildToTask(std::shared_ptr<Task> childTask)
{
	return false;
}

void attackPlayer::setConditional(bool conditional)
{
	this->conditional = conditional;
}
