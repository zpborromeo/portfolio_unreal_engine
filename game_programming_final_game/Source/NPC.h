#pragma once
#include "Component.h"
class Task;
class Object;
class Blackboard;
class BehaviorTree;
class BodyComponent;

enum NPCFacings {  NPC_IDLE = 0, NPC_LEFT, NPC_RIGHT, NPC_DOWN, NPC_UP };

class NPC :
	public Component
{
public:
	NPC(std::shared_ptr<Object> owner, std::map<std::string, bool> behaveList);
	~NPC();

	void Initialize();

	void Start() {};
	std::shared_ptr<Object> update();
	void Finish();
	void setDirection(NPCFacings facing);

private:
	std::shared_ptr<BehaviorTree> behaviorTree;
	NPCFacings currDirection;
	std::vector<std::string> dialogue;
	std::map<std::string, bool> behaviorsList;
};

