#include "pch.h"
#include "Component.h"
#include "GraphicsDevice.h"
#include "Object.h"

Component::Component(std::shared_ptr<Object> owner)
{
	this->owner = owner;
}

std::shared_ptr<Object> Component::getOwner()
{
	return owner;
}
