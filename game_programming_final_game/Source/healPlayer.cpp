#include "pch.h"
#include "healPlayer.h"
#include "NPC.h"
#include "Object.h"
#include "BodyComponent.h"
#include "PhysicsComponent.h"
#include "enemyMovement.h"

healPlayer::healPlayer(std::shared_ptr<BehaviorTree> tree, std::shared_ptr<Task> control) : LeafTask(tree, control)
{

}

healPlayer::~healPlayer()
{
}

bool healPlayer::initiailize(bool conditional, Vector2D& goal)
{
	this->conditional = conditional;
	this->goal = &goal;
	status = FRESH;
	return false;
}

//increase player HP value?
void healPlayer::run()
{
	if (conditional)
	{
		//FILL IN LATER
	}
	else
		fail();
}

bool healPlayer::addChildToTask(std::shared_ptr<Task> childTask)
{
	return false;
}

void healPlayer::setConditional(bool conditional)
{
	this->conditional = conditional;
}
