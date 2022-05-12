#pragma once
#include "Constants.h"
#include "b2_contact.h"
#include "b2_world_callbacks.h"


class ContactListener : public b2ContactListener
{
public:
	void BeginContact(b2Contact* contact) {}

	void EndContact(b2Contact* contact) {}

	void PreSolve(b2Contact* contact, const b2Manifold* oldManifold);


	void PostSolve(b2Contact* contact, const b2ContactImpulse* impulse) {}
};