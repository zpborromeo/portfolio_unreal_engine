#pragma once

class Object;
struct Vector2D;

class PhysicsDevice
{
public:
	PhysicsDevice(Vector2D gravity);
	bool initialize();
	bool createFixture(Object& object, GAME_PHYSICS& physics);
	//Joints
	bool createDistanceJoint(
		std::shared_ptr<Object> object1, std::shared_ptr<Object> object2,
		float maxDistance,
		Vector2D anchor1,
		Vector2D anchor2
	);
	bool createDistanceJoint(
		std::shared_ptr<Object> object1, std::shared_ptr<Object> object2,
		float maxDistance
	);
	bool createRopeJoint(
		std::shared_ptr<Object> object1, std::shared_ptr<Object> object2,
		float maxDistance,
		Vector2D anchor1,
		Vector2D anchor2,
		bool collide //will they collide
	);

	b2RevoluteJoint* createRevolvingJoint(
		std::shared_ptr<Object> object1, std::shared_ptr<Object> object2,
		Vector2D anchor1,
		Vector2D anchor2,
		float referenceAngle, //angle objects start at
		bool enableLimit, //making a limited joint
		float lowerAngle, //sets lowest angle
		float upperAngle, //sets upper angle
		bool motorEnable,
		float motorSpeed,
		float maxMotorTorque,
		bool collide
	);

	b2Body* createEdge(Vector2D start, Vector2D finish, bool goal=false);

	void destroyWorld();
	

	Vector2D getPosition(Object& object);
	float getAngle(Object& object);

	void setVelocity(Object& object, Vector2D velocity);
	void setPosition(Object& object, Vector2D position);
	void applyImpulse(Object& object, Vector2D velocity);
	void applyForce(Object& object, Vector2D velocity);
	void setVelocity(Object& object, float x, float y);
	void applyForce(Object& object, bool forward);
	void applyAngularForce(Object& object, bool right);

	bool update(const float& dt);
	b2Body* findBody(Object& object);

	bool removeObject(Object& object);

	//conversions between phsysics world and SDL2
	Vector2D PV2GV(b2Vec2 physicsVec);
	b2Vec2 GV2PV(Vector2D physicsVec);

	//Physics World to Real world. Since physics uses between 1-10
	inline float PW2RW(float x) { return x * fPRV; } //float to phsyics float
	inline float RW2PW(float x) { return x / fPRV; } //physics float to float
	inline float RW2PW(GAME_INT x) { return (float)x / fPRV; } //int to physics float
	inline float RW2PWAngle(float x) { return((float)x * (2.0f * PI) / 360.0f); } //degrees to radians
	inline float PW2RWAngle(float x) { return((float)x * 360.0f / (2.0f * PI)); } //radians to degrees

	//public just for creating borders!
	std::shared_ptr<b2World> world;
private:

	const b2Vec2 gravity;
	Vector2D alignCenters(Object& object);
};