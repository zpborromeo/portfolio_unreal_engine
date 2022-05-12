#pragma once
#include "Constants.h"
class Object;
class Blackboard
{
public:
	Blackboard();
	~Blackboard();
	Vector2D* playerPosition;
	std::map<std::shared_ptr<Object>, std::shared_ptr<Vector2D>> enemyOrigins;
	std::vector<std::shared_ptr<Object>> objects;
	bool attack;
};

