#pragma once
#include "Component.h"


class BodyComponent : public Component
{
public:
	BodyComponent(float x, float y, float angle, std::string name, std::shared_ptr<Object> owner);
	virtual std::shared_ptr<Object> update();
	const float getDistance(Vector2D objectPosition);
	Vector2D& getPosition();
	void setPosition(float x, float y, float angle = 0.f);
	void save(tinyxml2::XMLElement* object) override;
	
	b2Body* body;

private:
	Vector2D position;
	
};

