#include "pch.h"
#include "Sequence.h"



Sequence::Sequence(std::shared_ptr<BehaviorTree> tree, std::shared_ptr<Task> control):BranchTask(tree, control)
{

}


Sequence::~Sequence()
{
}

void Sequence::run()
{
	//1. if one is running continue to run it.
	if (status == RUNNING)
	{
		BranchTask::run();
	}
	else
	{
		int j = -1;
		do
		{
			j++;
			children[j]->run();
			if (status == FAILED) return; //child will set my status
		} while (j < children.size() - 1);
	}

}

void Sequence::childSuccess()
{
	status = SUCEEDED;
	if (control != nullptr)
	{
		control->childSuccess();
	}
}

void Sequence::childFail()
{
	status = FAILED;
	if (control != nullptr)
	{
		control->childFail();
	}
}

void Sequence::childRunning()
{
	status = RUNNING;
	if (control != nullptr)
	{
		control->childRunning();
	}
}
