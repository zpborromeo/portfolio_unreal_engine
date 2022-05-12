#include "pch.h"
#include "BodyComponent.h"
#include "Object.h"
#include "PhysicsComponent.h"

BodyComponent::BodyComponent(float x, float y, float angle, std::string name, std::shared_ptr<Object> owner)
	: Component(owner)
{
	position.x = x;
	position.y = y;
	position.angle = angle;
	position.name = name;
	std::cout << name << " made \n";
	body = nullptr;
}

std::shared_ptr<Object> BodyComponent::update()
{
	return owner;
}

const float BodyComponent::getDistance(Vector2D objectPosition)
{
	Vector2D position = owner->getComponent<PhysicsComponent>()->getPosition();
	//atm based on top left, would probably used centerPosition later on
	return sqrtf((float)pow((position.x - objectPosition.x), 2) + (float)pow((position.y - objectPosition.y), 2));
}

Vector2D& BodyComponent::getPosition()
{
	return position;
}

void BodyComponent::setPosition(float x, float y, float angle)
{
	position.x = x;
	position.y = y;
	position.angle = angle;
}

void BodyComponent::save(tinyxml2::XMLElement* object)
{
	tinyxml2::XMLElement* componentElement = object->FirstChildElement("Body");
	componentElement->SetAttribute("x", position.x);
	componentElement->SetAttribute("y", position.y);
	componentElement->SetAttribute("angle", position.angle);
	componentElement->SetAttribute("name", position.name.c_str());
}
