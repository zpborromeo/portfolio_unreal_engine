#include "pch.h"
#include "Constants.h"
#include "NPC.h"
#include "Blackboard.h"
#include "PhysicsComponent.h"
#include "BodyComponent.h"
#include "Object.h"
#include "Selector.h"
#include "Sequence.h"
#include "Task.h"
#include "BehaviorTree.h"
#include "BranchTask.h"
#include "LeafList.h"
#include "enemyMovement.h"


NPC::NPC(std::shared_ptr<Object> owner, std::map<std::string, bool> behaveList)
	: Component(owner), behaviorsList(behaveList)
{
	behaviorTree = std::make_shared<BehaviorTree>(*this);
	currDirection = NPC_IDLE;
	Initialize();
	
}


NPC::~NPC()
{
}

void NPC::Initialize()
{
	//set the initial position for this object.
	Task::blackboard->enemyOrigins[owner] = std::make_shared<Vector2D>(owner->getComponent<PhysicsComponent>()->phyDev->getPosition(*owner));
	
	////create behavior tree
	behaviorTree = std::make_shared<BehaviorTree>(*this);
	
	//root of tree is a selector
	std::shared_ptr<Selector> decideBehavior = std::make_shared<Selector>(behaviorTree,nullptr);
	behaviorTree->addChild(decideBehavior);

	//add sequences (in order) to selector
	std::shared_ptr<Sequence> chaseEnemy = std::make_shared<Sequence>(behaviorTree,decideBehavior);
	decideBehavior->addChild(chaseEnemy);

	//add leaf tasks to sequence
			
	if (behaviorsList.at("roaming")) {
		std::shared_ptr<roaming> roam = std::make_shared<roaming>(behaviorTree, chaseEnemy); //condition
		chaseEnemy->addChild(roam);
	}

			std::shared_ptr<enemyVisible> enemyVis = std::make_shared<enemyVisible>(behaviorTree, chaseEnemy); //condition
			chaseEnemy->addChild(enemyVis);

	if (behaviorsList.at("follow")) {
		std::shared_ptr<facePlayer> turnTowardEnemy = std::make_shared<facePlayer>(behaviorTree, chaseEnemy); //action
		turnTowardEnemy->initiailize(true, *Task::blackboard->playerPosition);
		chaseEnemy->addChild(turnTowardEnemy);
	}

	if (behaviorsList.at("jump")) {
		std::shared_ptr<jumpPlayer> jumpAtPlayer = std::make_shared<jumpPlayer>(behaviorTree, chaseEnemy); //action
		jumpAtPlayer->initiailize(true, *Task::blackboard->playerPosition);
		chaseEnemy->addChild(jumpAtPlayer);
	}
	//		MoveToward* moveTowardEnemy = new MoveToward(behaviorTree, chaseEnemy);
	//		chaseEnemy->addChild(moveTowardEnemy);
	//	
	//	Sequence* returnToOrigin = new Sequence(behaviorTree, decideBehavior);
	//	decideBehavior->addChild(returnToOrigin);
	//		//add leaf tasks to sequence
	//		TurnToward* turnTowardEnemy = new TurnToward(behaviorTree, returnToOrigin);
	//		returnToOrigin->addChild(turnTowardEnemy);

	//		MoveToward* moveTowardEnemy = new MoveToward();
	//		returnToOrigin->addChild(moveTowardEnemy);
	//		
	//	Spin* patrol = new Spin(behaviorTree, decideBehavior);
	//	patrol->initiailize();
	//	decideBehavior->addChild(patrol);
	//	

	


}

std::shared_ptr<Object> NPC::update()
{
	
	behaviorTree->start();
	behaviorTree->run();

	return owner;
}

void NPC::Finish()
{

}

void NPC::setDirection(NPCFacings facing)
{
	currDirection = facing;
	if(owner->getComponent<enemyMovement>() != nullptr)
	{
		//enemy movement
		switch(currDirection)
		{
		case(NPCFacings::NPC_LEFT):
			owner->getComponent<enemyMovement>()->setFacingDirection(EnemyFacing::ENEMY_LEFT);
			break;
		case(NPCFacings::NPC_RIGHT):
			owner->getComponent<enemyMovement>()->setFacingDirection(EnemyFacing::ENEMY_RIGHT);
			break;
		case(NPCFacings::NPC_DOWN):
			owner->getComponent<enemyMovement>()->setFacingDirection(EnemyFacing::ENEMY_DOWN);
			break;
		case(NPCFacings::NPC_UP):
			owner->getComponent<enemyMovement>()->setFacingDirection(EnemyFacing::ENEMY_UP);
			break; 
		case(NPCFacings::NPC_IDLE):
		default:
			owner->getComponent<enemyMovement>()->setFacingDirection(EnemyFacing::ENEMY_IDLE);
			break;
		}
	}
	else {
		
	}
}
