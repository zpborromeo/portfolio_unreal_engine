#include "pch.h"
#include "enemyVisible.h"
#include "NPC.h"
#include "Object.h"
#include "BodyComponent.h"
#include "Blackboard.h"


enemyVisible::enemyVisible(std::shared_ptr<BehaviorTree> tree, std::shared_ptr<Task> control)
    : LeafTask(tree, control)
{
	
	bodyComponent = std::make_shared<BodyComponent>(*owner->getOwner()->getComponent<BodyComponent>());
}

enemyVisible::~enemyVisible()
{
}

void enemyVisible::run()
{
    float distance = bodyComponent->getDistance(*Task::blackboard->playerPosition);
	if (distance <= 200)
	{
		success();
	}
	else
	{
		fail();
	}
}

bool enemyVisible::addChildToTask(std::shared_ptr<Task> childTask)
{
    return false;
}
