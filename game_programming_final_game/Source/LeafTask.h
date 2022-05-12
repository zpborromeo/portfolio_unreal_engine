#pragma once
#include "Task.h"
class LeafTask :
	public Task
{
public:
	LeafTask(std::shared_ptr<BehaviorTree> tree, std::shared_ptr<Task> control);
	~LeafTask();
	
	std::shared_ptr<bool> nextCondition;
protected:
	//overloading virtual functions, but leaf tasks do not need any of these!
	void childSuccess() {}
	void childFail() {}
	void childRunning() {}
	bool addChildToTask(Task* childTask) { return true; }
	int getChildCount() { return 0; }
	std::shared_ptr<Task> getChild(int index) { return nullptr; }
	
};

