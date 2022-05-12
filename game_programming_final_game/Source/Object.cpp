#include "pch.h"
#include "Object.h"
#include "Component.h"
#include "View.h"
#include "PhysicsComponent.h"

Object::Object()
{	
	
}

Object::~Object()
{

}

void Object::removeObject()
{
	getComponent<PhysicsComponent>()->removeObject();
}

std::shared_ptr<Object> Object::update()
{
	for(auto& i : components)
	{
		if(i->update() == nullptr)
		{
			removeObject();
			return nullptr;
		}
	}

	return std::make_shared<Object>(*this);
}

void Object::draw(std::shared_ptr<View> view)
{
	//Maybe change to only components that actually need draw
	for (auto& i : components)
	{
		i->draw(view);
	}
}

void Object::initialize(std::shared_ptr<EngineData> initData, std::shared_ptr<Object> player)
{
	for (auto& i : components)
	{
		i->initialize(initData, player);
	}

}

void Object::addComponent(std::shared_ptr<Component> component_ptr)
{
	components.push_back(component_ptr);
}

void Object::save(tinyxml2::XMLElement* object)
{
	for (auto& i : components)
	{
		i->save(object);
	}

}
