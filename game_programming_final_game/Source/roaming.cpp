#include "pch.h"
#include "roaming.h"
#include "NPC.h"
#include "Object.h"

std::random_device roaming::seed;
std::default_random_engine roaming::engine(seed());

roaming::roaming(std::shared_ptr<BehaviorTree> tree, std::shared_ptr<Task> control)
	: LeafTask(tree, control)
{
}

roaming::~roaming()
{
}

bool roaming::initiailize(bool conditional, Vector2D& goal)
{
	this->conditional = conditional;
	this->goal = &goal;
	status = FRESH;
	return false;
}

void roaming::run()
{
	if (conditional)
	{
		std::bernoulli_distribution moveChance(.1f);
		if (moveChance(engine)) {
			std::uniform_int_distribution<int> attributeDivider(0, 6);
			switch (attributeDivider(engine))
			{
			case(0):
				owner->setDirection(NPCFacings::NPC_LEFT);
				break;
			case(1):
				owner->setDirection(NPCFacings::NPC_RIGHT);
				break;
			case(2):
				owner->setDirection(NPCFacings::NPC_DOWN);
				break;
			default:
				owner->setDirection(NPCFacings::NPC_IDLE);
				break;
			}
		}
		success();
	}
	else
		fail();
}

bool roaming::addChildToTask(std::shared_ptr<Task> childTask)
{
	return false;
}

void roaming::setConditional(bool conditional)
{
}
