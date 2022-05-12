#pragma once
#include "Component.h"
#include "PhysicsDevice.h"

class Timer;
class TextDevice;
class AudioDevice;

class PhysicsComponent : public Component
{
public:
	PhysicsComponent(std::shared_ptr<PhysicsDevice> phy_Dev, GAME_PHYSICS bodyPhysics, std::shared_ptr<Object> owner);
	void addPhysicsObject(GAME_PHYSICS bodyPhysics); //can be used to add different fixtures
	void addRevolutionJoint(std::shared_ptr<Object> object2, Vector2D anchor1, Vector2D anchor2, float referenceAngle, bool enableLimit, float lowerAngle, float upperAngle, bool motorEnable, float motorSpeed, float maxMotorTorque,
		bool collide); //can be used to add different fixtures
	void removeObject();
	bool initialize(std::shared_ptr<EngineData> initData, std::shared_ptr<Object> player) override;
	virtual std::shared_ptr<Object> update();
	void save(tinyxml2::XMLElement* object) override;

	
	void setVelocity(Vector2D velocity);
	void setVelocity(float x, float y);
	std::shared_ptr<PhysicsDevice> phyDev;

	void staticCollisions(Object* collider);
	void dynamicCollisions(Object* collider);
	void setIsDead(bool dead);
	void setRevolutionJoint(b2RevoluteJoint* revoluteJoint);
	b2RevoluteJoint* getRevolutionJoint();
	const GAME_PHYSICS& getBodyPhysics() const;
	Vector2D& getPosition();
	Vector2D& getOffset();

	bool gameWon;
private:
	Vector2D position;
	Vector2D offset;
	GAME_PHYSICS body_Physics;
	bool isDead;
	b2RevoluteJoint* revolutionJoint;
	std::shared_ptr<bool> nextLevel;
	std::shared_ptr<TextDevice> tDevice;
	std::shared_ptr<AudioDevice> aDevice;
	std::shared_ptr<View> view;
	//timer for attacks to not hit repeatedly
	std::unique_ptr<Timer> attackTimer;
	float attackTime;

	std::unique_ptr<Timer> playerTimer;
	float playerTime;
};