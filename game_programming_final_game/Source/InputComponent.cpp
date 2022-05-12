#include "pch.h"
#include "InputComponent.h"
#include "InputDevice.h"
#include "Object.h"
#include "BodyComponent.h"
#include "SpriteComponent.h"
#include "PhysicsComponent.h"
#include "Timer.h"
#include "AudioDevice.h"

InputComponent::InputComponent(std::shared_ptr<Object> owner)
	: Component(owner), Jumping(false), Attacking(false)
{
 	keyTimer = std::make_unique<Timer>();
	keyTime = 1700.f;
	keyTimer->Initialize(keyTime);
	keyTimer->reset();
	keyTimer->start();

	attackTimer = std::make_unique<Timer>();
	attackTime = 300.f;
	attackTimer->Initialize(keyTime);
	attackTimer->reset();
	attackTimer->start();
	weaponJoint = owner->getComponent<PhysicsComponent>()->getRevolutionJoint();

	//should be from engine?
	//audioDevice = std::make_shared<AudioDevice>(22050, MIX_DEFAULT_FORMAT, 2, 4096);//values stolen from orme
}


std::shared_ptr<Object> InputComponent::update()
{
	if (MOVING)
	{
		//Sets Idle Animation
		b2Body* body = owner->getComponent<PhysicsComponent>()->phyDev->findBody(*owner);
		if (body->GetLinearVelocity().Length() < 1.4f) {
			MOVING = false;
			owner->getComponent<SpriteComponent>()->animationChange(1, 1, 1);
			body->SetLinearVelocity(b2Vec2(0.f, body->GetLinearVelocity().y));
		}
	}

	if(keyTimer->getTicks() > keyTime)
	{
		Jumping = false;
	}

	if (attackTimer->getTicks() > attackTime && Attacking)
	{
		weaponJoint->SetMaxMotorTorque(-10000);
		weaponJoint->GetBodyA()->GetFixtureList()->SetDensity(1.2f);
		Attacking = false;
	}
	return owner;

}

void InputComponent::handleEvent(std::shared_ptr<InputDevice> input_dev)
{

	float dir_x = 0; 
	float dir_y = 0;
	/*
	if (input_dev->getEvent(InputDevice::UserInputs::DOWN))
	{
		owner->getComponent<SpriteComponent>()->animationChange(0, 1, 2);
		dir_y = 1.f;
	}
	else if (input_dev->getEvent(InputDevice::UserInputs::UP))
	{
		owner->getComponent<SpriteComponent>()->animationChange(9, 10, 11);
		dir_y = -1.f;
	}*/
	//Jump
	
	//X movement
	if (input_dev->getEvent(InputDevice::UserInputs::RIGHT))
	{
		owner->getComponent<SpriteComponent>()->animationChange(6, 7, 8);
		dir_x = 2.f;
		MOVING = true;
	}
	else if (input_dev->getEvent(InputDevice::UserInputs::LEFT))
	{
		owner->getComponent<SpriteComponent>()->animationChange(3, 4, 5);
		dir_x = -2.f;
		MOVING = true;
	}
	//Y movement
	if (input_dev->getEvent(InputDevice::UserInputs::SPACE) && keyTimer->getTicks() > keyTime)
	{
		keyTimer->resetTicks();
		Jumping = true;
		dir_y = -80.f;
		Vector2D velocity(dir_x * acceleration, dir_y * acceleration);
		owner->getComponent<PhysicsComponent>()->phyDev->applyImpulse(*owner, velocity);
		MOVING = true;

		audioDevice->playChunk("Jump", 0);
	}
	else
	{
		Vector2D velocity(dir_x * acceleration, dir_y * acceleration);
		if (Jumping) {
			velocity.x /= 2;
		}
		owner->getComponent<PhysicsComponent>()->phyDev->applyImpulse(*owner, velocity);
		MOVING = true;
		//audioDevice -> playChunk("Jump", 1);
	}
	if (input_dev->getEvent(InputDevice::UserInputs::LEFT_CLICK) && attackTimer->getTicks() > attackTime)
	{
		attackTimer->resetTicks();
		std::cout << "player: Spin" << "\n";
		weaponJoint->SetMaxMotorTorque(100000);
		weaponJoint->SetMotorSpeed(-200);
		weaponJoint->GetBodyA()->GetFixtureList()->SetDensity(.1f);
		weapon->getComponent<PhysicsComponent>()->phyDev->applyImpulse(*weapon, Vector2D{ 0.f,30.f });
		Attacking = true;
		//MOVING = true;

		int iRand = (rand() % 9) + 1;

		if (iRand == 1) {
			audioDevice->playChunk("Slash1", 1);
		}
		else if (iRand == 2) {
			audioDevice->playChunk("Slash2", 1);
		}
		else if (iRand == 3) {
			audioDevice->playChunk("Slash3", 1);
		}
		else if (iRand == 4) {
			audioDevice->playChunk("Slash4", 1);
		}
		else if (iRand == 5) {
			audioDevice->playChunk("Slash5", 1);
		}
		else if (iRand == 6) {
			audioDevice->playChunk("Slash6", 1);
		}
		else if (iRand == 7) {
			audioDevice->playChunk("Slash7", 1);
		}
		else if (iRand == 8) {
			audioDevice->playChunk("Slash8", 1);
		}
	}


}

bool InputComponent::initialize(std::shared_ptr<EngineData> initData, std::shared_ptr<Object> player)
{
	audioDevice = initData->aDevice;
	if(audioDevice!= nullptr)
	{
		return true;
	}
	std::cout << "ERROR::INPUTCOMPONENT:: AudioDevice not loaded in \n";
		return false;
}

void InputComponent::setAcceleration(float accel)
{
	acceleration = accel;
}

void InputComponent::setDeceleration(float decel)
{
	deceleration = decel;
}