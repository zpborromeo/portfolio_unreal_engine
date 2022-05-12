#pragma once
#include "Component.h"

class AttributeComponent;

class CombatComponent :
    public Component
{
public:
    CombatComponent(std::shared_ptr<Object> owner);
    // Inherited via Component
    std::shared_ptr<Object> update() override; 

    int attack();
    int defend(Object* defender); 

private:
    AttributeComponent* attributes;
    static std::random_device seed;
    static std::default_random_engine engine;
};

