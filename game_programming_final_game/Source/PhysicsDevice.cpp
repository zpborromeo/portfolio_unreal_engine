#include "pch.h"
#include "PhysicsDevice.h"
#include "Object.h"
#include "SpriteComponent.h"
#include "Texture.h"
#include "BodyComponent.h"
#include "ContactListener.h"
#include "../Box2d/Include/box2d/b2_body.h"

PhysicsDevice::PhysicsDevice(Vector2D gravity) :gravity(RW2PW(gravity.x), RW2PW(gravity.y))
{
}

//**************************************
//Creates a new world on initialization
bool PhysicsDevice::initialize()
//**************************************
{
	world = std::make_shared<b2World>(gravity);

	//Create Listener
	std::unique_ptr<ContactListener> contactListener = std::make_unique<ContactListener>();
	world->SetContactListener(contactListener.release());
	
	if (world == nullptr) return false;
	return true;
}

//**************************************
//Steps the physics world
//
bool PhysicsDevice::update(const float& dt)
//**************************************
{
	world->Step(dt, 8, 3);
	return true;
}

//**************************************
//Creates a body and fixture for a passed in object
//based on passed in values
//Fixture handles all the extra values a fixture could need. 
bool PhysicsDevice::createFixture
(
	Object& object,
	GAME_PHYSICS& physics
)
//**************************************
{
	//need the sprite component first!
	if (object.getComponent<SpriteComponent>() == nullptr) return false;
	//new body definition
	std::unique_ptr<b2BodyDef> bd =  std::make_unique<b2BodyDef>();

	//set body type based our games enum of body types
	switch (physics.bodyType)
	{
	case GAME_STATIC:
		bd->type = b2_staticBody;
		break;
	case GAME_KINEMATIC:
		bd->type = b2_kinematicBody;
		break;
	case GAME_DYNAMIC:
		bd->type = b2_dynamicBody;
		break;
	}

	//********Adjust postion because SDL is top left, while box2d is center*************
	//Texture* texture = object.getComponent<Sprite>()->getTexture();
	//subtract off half the width.
	Vector2D position{ object.getComponent<BodyComponent>()->getPosition().x / 2, object.getComponent<BodyComponent>()->getPosition().y / 2 };
	
	//**********************************************************************************

	// set starting position & angle
	bd->position.Set(RW2PW(position.x), RW2PW(position.y));
	bd->angle = RW2PWAngle(physics.angle);
	bd->bullet = physics.bullet;

	bd->userData.pointer = reinterpret_cast<uintptr_t>(&object);
	//add the body to the world
	b2Body* body = world->CreateBody(bd.release());
	object.getComponent<BodyComponent>()->body = body;

	//getUserData returns modifiable pointer,
	//no clue if this will work yet
	
	
	
	//Set damping values on the body
	body->SetAngularDamping(physics.angularDamping);
	body->SetLinearDamping(physics.linearDamping);

	
	
	//Fixture definition
	b2FixtureDef shapefd;
	//made need one or the other, depending on what was passed.
	b2PolygonShape pShape;
	b2CircleShape cShape;
	float width = physics.hitBoxX / 2.0f;
	float height = physics.hitBoxY / 2.0f;
	//Set fixture's shape
	switch (physics.objectShape)
	{
	case GAME_RECTANGLE:
		//rectangle's dimensions
		pShape.SetAsBox(RW2PW(width), RW2PW(height));
		shapefd.shape = &pShape;
		break;
	case GAME_CIRCLE:
		//circle radius based on object's width.
		

		if (width > height)	cShape.m_radius = (RW2PW(width));
		else cShape.m_radius = (RW2PW(height));
		shapefd.shape = &cShape;
		break;
	}

	//set fixture values based on passed in values.
	shapefd.density = physics.density;
	shapefd.friction = physics.friction;
	shapefd.restitution = physics.restitution;

	b2Filter f;
	f.categoryBits = physics.category;
	f.maskBits = physics.mask;
	shapefd.filter = f;
	shapefd.isSensor;

	//create the fixture on the body.
	body->CreateFixture(&shapefd);
	body->SetEnabled(physics.physicsOn);
	body->SetFixedRotation(physics.fixedRotation);
	return true;

}

bool PhysicsDevice::createDistanceJoint(std::shared_ptr<Object> object1, std::shared_ptr<Object> object2, float maxDistance, Vector2D anchor1, Vector2D anchor2)
{
	b2DistanceJointDef jd;
	jd.bodyA = findBody(*object1);
	jd.bodyB = findBody(*object2);
	jd.collideConnected = false;
	jd.localAnchorA = GV2PV(anchor1);
	jd.localAnchorB = GV2PV(anchor2);
	//jd.minLength = 0.f;
	jd.maxLength = RW2PW(maxDistance);
	world->CreateJoint(&jd);
	return true;
}

bool PhysicsDevice::createDistanceJoint(std::shared_ptr<Object> object1, std::shared_ptr<Object> object2, float maxDistance)
{
	return createDistanceJoint(
		object1, 
		object2, 
		maxDistance,
		PV2GV(findBody(*object1)->GetLocalCenter()), 
		PV2GV(findBody(*object2)->GetLocalCenter())
		);
}

bool PhysicsDevice::createRopeJoint(std::shared_ptr<Object> object1, std::shared_ptr<Object> object2, float maxDistance, Vector2D anchor1, Vector2D anchor2, bool collide)
{
	//b2RopeJointDef jd;
	
	/*jd.bodyA = findBody(*object1);
	jd.bodyB = findBody(*object2);
	jd.collideConnected = false;
	jd.localAnchorA = GV2PV(anchor1);
	jd.localAnchorB = GV2PV(anchor2);
	jd.maxLength = RW2PW(maxDistance);
	world->CreateJoint(&jd);*/
	return true;
}

b2RevoluteJoint* PhysicsDevice::createRevolvingJoint(std::shared_ptr<Object> object1, std::shared_ptr<Object> object2, Vector2D anchor1, Vector2D anchor2, float referenceAngle, bool enableLimit, float lowerAngle, float upperAngle, bool motorEnable, float motorSpeed, float maxMotorTorque,
	bool collide)
{
	b2RevoluteJointDef jd;

	
	jd.bodyA = findBody(*object1);
	jd.bodyB = findBody(*object2);
	jd.collideConnected = collide;
	jd.localAnchorA = GV2PV(anchor1);
	jd.localAnchorB = GV2PV(anchor2);
	jd.referenceAngle = RW2PWAngle(referenceAngle);
	jd.enableLimit = enableLimit;
	jd.lowerAngle = RW2PWAngle(lowerAngle);
	jd.upperAngle = RW2PWAngle(upperAngle);
	jd.enableMotor = motorEnable;
	jd.motorSpeed = RW2PW(motorSpeed);
	jd.maxMotorTorque = RW2PW(maxMotorTorque);
	b2RevoluteJoint* m_joint = (b2RevoluteJoint*)world->CreateJoint(&jd);
	return m_joint;
}



b2Body* PhysicsDevice::createEdge(Vector2D start, Vector2D finish, bool goal) {
	b2BodyDef bd;
	bd.type = b2_staticBody;
	b2Body* bb = world->CreateBody(&bd);
	b2EdgeShape bEdge;
	bEdge.SetTwoSided(GV2PV(start), GV2PV(finish));
	
	b2Filter f;
	
	if (goal) {
		f.categoryBits = CATEGORY_GOAL;
		f.maskBits = MASK_GOAL;
	}
	else {
		f.categoryBits = CATEGORY_WALL;
		f.maskBits = MASK_WALL;
	}
	
	


	
	
	b2FixtureDef shapefd;

	shapefd.shape = &bEdge;
	shapefd.density = 10.f;
	shapefd.friction = 0.f;
	shapefd.restitution = 0.f;

	shapefd.filter = f;

	
	bb->CreateFixture(&shapefd);
	bb->SetEnabled(true);

	return bb;
}

void PhysicsDevice::destroyWorld()
{
	world = nullptr;
}

Vector2D PhysicsDevice::getPosition(Object& object)
{

	return (alignCenters(object));
}

float PhysicsDevice::getAngle(Object& object)
{
	return (PW2RWAngle(findBody(object)->GetAngle()));
}

void PhysicsDevice::setVelocity(Object& object, Vector2D velocity)
{
	b2Body* body = findBody(object);
	body->SetLinearVelocity({ velocity.x / 10,velocity.y / 10 });
}

void PhysicsDevice::setPosition(Object& object, Vector2D pos)
{
	b2Body* body = findBody(object);
	body->SetTransform(b2Vec2(RW2PW(pos.x), RW2PW(pos.y)), RW2PWAngle(pos.angle));
}


void PhysicsDevice::applyImpulse(Object& object, Vector2D velocity)
{
	b2Body* body = findBody(object);
	body->ApplyLinearImpulseToCenter({ velocity.x,velocity.y }, true);
}

void PhysicsDevice::applyForce(Object& object, Vector2D velocity)
{
	b2Body* body = findBody(object);
	body->ApplyForceToCenter({ velocity.x,velocity.y }, true);
}

void PhysicsDevice::setVelocity(Object& object, float x, float y)
{
	b2Body* body = findBody(object);
	body->SetLinearVelocity({ x / 10,y / 10 });
}

void PhysicsDevice::applyForce(Object& object, bool forward)
{
	int forceMultiplier = 10;
	b2Vec2 applyForce;
	forward = true;
	if (forward)
	{
		applyForce.x = (cosf(getAngle(object) * PI / 180) - (PI / 2)) * forceMultiplier;
		applyForce.y = (sinf(getAngle(object) * PI / 180) - (PI / 2)) * forceMultiplier;
	}
	else
	{
		applyForce.x = (cosf(getAngle(object) * PI / 180) + (PI / 2)) * forceMultiplier;
		applyForce.y = (sinf(getAngle(object) * PI / 180) + (PI / 2)) * forceMultiplier;
	}
	findBody(object)->ApplyForce(applyForce, findBody(object)->GetWorldCenter(), true);
}

void PhysicsDevice::applyAngularForce(Object& object, bool right)
{
	float forceMultiplier = 1;
	if (!right) forceMultiplier *= -1;
	forceMultiplier = findBody(object)->GetAngularVelocity() + (forceMultiplier * 2.0f * (1 / 50));
	findBody(object)->SetAngularVelocity(forceMultiplier);
}

b2Body* PhysicsDevice::findBody(Object& object)
{
	for (b2Body* body = world->GetBodyList(); body; body = body->GetNext())
	{
		//when we have a match, return it.
		if (reinterpret_cast<uintptr_t>(&object) == body->GetUserData().pointer)
		{
			return body;
		}
	}
	//if there was no match, return nullptr
	return nullptr;
}

bool PhysicsDevice::removeObject(Object& object)
{
	//Find the body based on the passed object
	b2Body* body = findBody(object);

	//check to see if we have a body.
	if (body == nullptr)
	{
		return false;
	}
	else
	{
		//delete the body from the world
		world->DestroyBody(body);
		
		return true;
	}
}

Vector2D PhysicsDevice::PV2GV(b2Vec2 physicsVec)
{
	return { PW2RW(physicsVec.x), PW2RW(physicsVec.y) };
}

b2Vec2 PhysicsDevice::GV2PV(Vector2D physicsVec) {
	return { RW2PW(physicsVec.x), RW2PW(physicsVec.y) };
}

Vector2D PhysicsDevice::alignCenters(Object& object)
{
	//needed for position in physics world
	b2Vec2 physPosition = findBody(object)->GetPosition();
	//needed for width/height of object;
	//Texture* texture = object.getComponent<Sprite>()->getTexture();

	//adjust x & y positions by half the sprite's width and heigh respectively to get the top left corner!
	Vector2D position{ PW2RW(physPosition.x) - (SPRITE_WIDTH / 2), PW2RW(physPosition.y) - (SPRITE_HEIGHT / 2)};
	position.angle = PW2RWAngle(findBody(object)->GetAngle());
	return (position);

	
}