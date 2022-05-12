#include "pch.h"
#include "Selector.h"




Selector::Selector(std::shared_ptr<BehaviorTree> tree, std::shared_ptr<Task> control):BranchTask(tree, control)
{

}


Selector::~Selector()
{
}

void Selector::run()
{

	//1. if one is running continue to run it.
	if (status == RUNNING)
	{
		BranchTask::run();
	}
	//2. Otherwise, run sequentially until success, or run out of children
	else
	{
		int j = -1;
		do
		{
			j++;
			children[j]->run();
			if (status == SUCEEDED) return; //child will set my status
		} while (j < children.size() - 1 ); 

	}
}

void Selector::childSuccess()
{
	status = SUCEEDED;
	if (control != nullptr)
	{
		control->childSuccess();
	}
	
}

void Selector::childFail()
{
	status = FAILED;
	if (control != nullptr)
	{
		control->childFail();
	}
}

void Selector::childRunning()
{
	status = RUNNING;
	if (control != nullptr)
	{
		control->childRunning();
	}
}

