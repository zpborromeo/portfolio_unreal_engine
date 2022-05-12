#pragma once
#include "ObjectFactory.h"
class Object;

class EnemyObjectFactory : public ObjectFactory
{

public:
	std::unique_ptr<Object>create(tinyxml2::XMLElement* objectElement);

private:


};


