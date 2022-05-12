#include "pch.h"
#include "PhysicsComponent.h"
#include "Object.h"
#include "ComponentsList.h"
#include "TextDevice.h"
#include "View.h"
#include "Timer.h"
#include "AudioDevice.h"

PhysicsComponent::PhysicsComponent(std::shared_ptr<PhysicsDevice> phy_Dev, GAME_PHYSICS bodyPhysics, std::shared_ptr<Object> owner)
	: Component(owner), isDead(false), gameWon(false)
{
	phyDev = phy_Dev;
	body_Physics = bodyPhysics;
	offset.x = body_Physics.offsetX;
	offset.y = body_Physics.offsetY;
	phyDev->createFixture(*owner, bodyPhysics);
	attackTimer = std::make_unique<Timer>();
	attackTime = 1000.f;
	attackTimer->Initialize(attackTime);
	attackTimer->reset();
	attackTimer->start();

	playerTimer = std::make_unique<Timer>();
	playerTime = 1000.f;
	playerTimer->Initialize(playerTime);
	playerTimer->reset();
	playerTimer->start();

}

void PhysicsComponent::addPhysicsObject(GAME_PHYSICS bodyPhysics)
{
	phyDev->createFixture(*owner, bodyPhysics);
}

void PhysicsComponent::addRevolutionJoint(std::shared_ptr<Object> object2, Vector2D anchor1, Vector2D anchor2, float referenceAngle, bool enableLimit, float lowerAngle, float upperAngle, bool motorEnable, float motorSpeed, float maxMotorTorque, bool collide)
{
	this->revolutionJoint = phyDev->createRevolvingJoint(owner, object2, anchor1, anchor2, referenceAngle, enableLimit, lowerAngle, upperAngle, motorEnable, motorSpeed, maxMotorTorque, collide);
}

void PhysicsComponent::removeObject()
{
	phyDev->removeObject(*owner);
}

bool PhysicsComponent::initialize(std::shared_ptr<EngineData> initData, std::shared_ptr<Object> player)
{
	nextLevel = initData->nextLevel;
	tDevice = initData->tDevice;
	aDevice = initData->aDevice;
	view = initData->view;
	return true;
}

std::shared_ptr<Object> PhysicsComponent::update()
{

	if (isDead) //handled by contact listner
		return nullptr;
	this->position = phyDev->getPosition(*owner);
	if(owner->getComponent<enemyMovement>() != nullptr)
	{
		//std::cout << "enemy angle: " << position.angle;
	}
	return owner;
}


void PhysicsComponent::save(tinyxml2::XMLElement* object)
{
	tinyxml2::XMLElement* componentElement = object->FirstChildElement("Physics");
	componentElement->SetAttribute("spinSpeed", body_Physics.spinSpeed);
	componentElement->SetAttribute("bodyType", body_Physics.bodyType);
	componentElement->SetAttribute("objectShape", body_Physics.objectShape);
	componentElement->SetAttribute("density", body_Physics.density);
	componentElement->SetAttribute("friction", body_Physics.friction);
	componentElement->SetAttribute("restitution", body_Physics.restitution);
	componentElement->SetAttribute("angularDamping", body_Physics.angularDamping);
	componentElement->SetAttribute("linearDamping", body_Physics.linearDamping);
	componentElement->SetAttribute("force", body_Physics.force);
	componentElement->SetAttribute("angle", body_Physics.angle);
	componentElement->SetAttribute("bullet", body_Physics.bullet);
	componentElement->SetAttribute("physicsOn", body_Physics.physicsOn);
}

//Uses Physics device to change velocity in physics world
void PhysicsComponent::setVelocity(Vector2D velocity)
{
	phyDev->setVelocity(*owner, velocity);
}

void PhysicsComponent::setVelocity(float x, float y)
{
	phyDev->setVelocity(*owner, x, y);
}

void PhysicsComponent::staticCollisions(Object* collider)
 {
	*nextLevel = true;
}

void PhysicsComponent::dynamicCollisions(Object* collider)
{
	if (collider->getComponent<PhysicsComponent>()->body_Physics.category == CATEGORY_ENEMY || 
		collider->getComponent<PhysicsComponent>()->body_Physics.category == CATEGORY_BOSS) //this is an enemy
	{
		if (body_Physics.category == CATEGORY_WEAPON && attackTimer->getTicks() > attackTime) {
			attackTimer->resetTicks();
			int hlth = collider->getComponent<CombatComponent>()->defend(owner.get());
			collider->getComponent<AttributeComponent>()->loseHeatlh(hlth*4);
			if (hlth == 0) {
				tDevice->addTextTag("Regular", 255, 0, 0, position.x - view->center.x + 25, position.y - view->center.y + 15, "miss", true);
			}
			else {
				tDevice->addTextTag("Regular", 255, 0, 0, position.x - view->center.x + 25, position.y - view->center.y + 15, hlth * 4, true);
				
			}
			b2Vec2 vel = phyDev->findBody(*owner)->GetLinearVelocity();
			vel.x = (vel.x > 0) - (vel.x < 0); 
			if (collider->getComponent<PhysicsComponent>()->body_Physics.category == CATEGORY_BOSS) {
				if (collider->getComponent<AttributeComponent>()->isDead)
				{
					gameWon = true;
				}
				vel.x *= 10;
			}
			else {
				vel.x *= 20;
			}
			vel.y *= .4;
			phyDev->findBody(*collider)->SetLinearVelocity(vel);
		}
		if (body_Physics.category == CATEGORY_PLAYER && playerTimer->getTicks() > playerTime) 
		{
			aDevice->playChunk("enemyHit", 0, 5);
			playerTimer->resetTicks();
			int helth = owner->getComponent<CombatComponent>()->defend(collider);
			owner->getComponent<AttributeComponent>()->loseHeatlh(helth);
			if (helth == 0) {
				tDevice->addTextTag("Regular", 255, 0, 255, position.x - view->center.x + 10, position.y - view->center.y + 15, "miss", true);
			}
			else {
				tDevice->addTextTag("Regular", 255, 0, 255, position.x - view->center.x + 10, position.y - view->center.y + 15, helth, true);

			}
		}
	}	

}

void PhysicsComponent::setIsDead(bool dead)
{
	isDead = dead;
}

void PhysicsComponent::setRevolutionJoint(b2RevoluteJoint* revoluteJoint)
{
	this->revolutionJoint = revoluteJoint;
}

b2RevoluteJoint* PhysicsComponent::getRevolutionJoint()
{
	return revolutionJoint;
}

const GAME_PHYSICS& PhysicsComponent::getBodyPhysics() const
{
	return body_Physics;
}

Vector2D& PhysicsComponent::getPosition()
{
	return position;
}

Vector2D& PhysicsComponent::getOffset()
{
	return offset;
}
