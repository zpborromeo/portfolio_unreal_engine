#pragma once
#include "BranchTask.h"
class Selector :
	public BranchTask
{
public:
	Selector(std::shared_ptr<BehaviorTree> tree, std::shared_ptr<Task> control);
	~Selector();
	void run();//contains the update logic of the task. The actual implementation MUST call running(), success() or fail() exactly once.
	void childSuccess(); //called when one of the children of the task succeeds.
	void childFail(); //called when one of the children of the task fails.
	void childRunning(); //called when one of the children of the task needs to run again.
	
protected:
	
	

};

