#include "pch.h"
#include "ContactListener.h"
#include "Object.h"
#include "ComponentsList.h"
#include "PhysicsComponent.h"
#include "PhysicsDevice.h"
#include "Constants.h"         

void ContactListener::PreSolve(b2Contact* contact, const b2Manifold* oldManifold)
{
	{

		//Grab the two Physics Bodies involved in the Contact
		b2Body* bodyA = contact->GetFixtureA()->GetBody();
		b2Body* bodyB = contact->GetFixtureB()->GetBody();

		

	
		Object* objectA = reinterpret_cast<Object*>(bodyA->GetUserData().pointer);
		Object* objectB = reinterpret_cast<Object*>(bodyB->GetUserData().pointer);
		//Conduct a modification
		if (bodyA->GetType() == b2_dynamicBody && bodyB->GetType() == b2_dynamicBody) {

			objectA->getComponent<PhysicsComponent>()->dynamicCollisions(objectB);
			objectB->getComponent<PhysicsComponent>()->dynamicCollisions(objectA);

			bodyA->ApplyLinearImpulseToCenter(b2Vec2(RW2PW(-30), RW2PW(-10)), true);
			bodyB->ApplyLinearImpulseToCenter(b2Vec2(RW2PW(30), RW2PW(30)), true);
		}
		else if (bodyB->GetType() == b2_dynamicBody && bodyA->GetType() == b2_staticBody)
		{
			if (bodyB->GetFixtureList()->GetFilterData().categoryBits == CATEGORY_PLAYER)
			{
				if (bodyA->GetFixtureList()->GetFilterData().categoryBits == CATEGORY_GOAL) {
					objectB->getComponent<PhysicsComponent>()->staticCollisions(objectB);
				}
			}
		}

	}
}