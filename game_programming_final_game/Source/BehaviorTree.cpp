#include "pch.h"
#include "BehaviorTree.h"
#include "Component.h"
#include "Task.h"

BehaviorTree::BehaviorTree(NPC& owner):Task(owner)
{
	root = nullptr;
}


BehaviorTree::~BehaviorTree()
{
}

void BehaviorTree::resetTask()
{
	root->resetTask();
}

void BehaviorTree::run()
{
	if(root->getStatus()!=CANCELLED)
		root->run();
}

bool BehaviorTree::addChildToTask(std::shared_ptr<Task> childTask)
{
	if (root == nullptr)
		root = childTask;
	else
		return false;
	return true;
}

std::shared_ptr<Task> BehaviorTree::getChild(int index)
{
	if (index == 0)
	{
		return root;
	}
	else return nullptr;
}
