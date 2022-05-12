#pragma once
#include "Task.h"

class NPC;


class BehaviorTree :
	public Task
{
public:
	BehaviorTree(NPC& owner);
	~BehaviorTree();

	void resetTask();

	void run();//contains the update logic of the task. The actual implementation MUST call running(), success() or fail() exactly once.
	void childSuccess() { status = SUCEEDED; } //called when one of the children of the task succeeds.
	void childFail() { status = FAILED; } //called when one of the children of the task fails.
	void childRunning() { status = RUNNING; } //called when one of the children of the task needs to run again.
	
protected:
	
	bool addChildToTask(std::shared_ptr<Task> childTask); //adds a child to the list of this task's children. It is called by the final method addChild() mentioned below.
	int getChildCount() { return 1; } //returns the number of children of the task.
	std::shared_ptr<Task> getChild(int index); //returns the child at the given index

	std::shared_ptr<Task> root;
	
};

