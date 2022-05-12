#include "pch.h"
#include "EnemyObjectFactory.h"
#include "Enemy.h"

std::unique_ptr<Object> EnemyObjectFactory::create(tinyxml2::XMLElement* objectElement)
{
	tinyxml2::XMLElement* body = objectElement->FirstChildElement("Body");

	float x;
	body->QueryFloatAttribute("x", &x);
	float y;
	body->QueryFloatAttribute("y", &y);
	float angle;
	body->QueryFloatAttribute("angle", &angle);
	Enemy e1(x, y, angle, "Enemy");
	return std::make_unique<Enemy>(std::move(e1));
}
