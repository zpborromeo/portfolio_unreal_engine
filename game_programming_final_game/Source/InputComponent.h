#pragma once
#include "Component.h"
//#include "AudioDevice.h"

class InputDevice;
class AudioDevice;

#include "Timer.h"
class InputComponent : public Component
{
public:
	InputComponent(std::shared_ptr<Object> owner);

	virtual std::shared_ptr<Object> update();
	void handleEvent(std::shared_ptr<InputDevice> input_dev);
	bool initialize(std::shared_ptr<EngineData> initData, std::shared_ptr<Object> player) override;

	//Setters
	void setAcceleration(float accel);
	void setDeceleration(float decel);

	std::shared_ptr<Object> weapon;
	b2RevoluteJoint* weaponJoint;
private:

	std::unique_ptr<Timer> keyTimer;
	std::unique_ptr<Timer> attackTimer;
	std::shared_ptr<AudioDevice> audioDevice;
	float keyTime;
	float attackTime;
	bool MOVING;
	bool Attacking;
	bool Jumping;
	const float maxVelocity = 250.f; //max Speed for object
	float acceleration = 15.f; // acceleration for object
	float deceleration = 5.f; //deceleration for object


};

