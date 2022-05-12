#include "pch.h"
#include "CombatComponent.h"
#include "Object.h"
#include "AttributeComponent.h"

std::random_device CombatComponent::seed;
std::default_random_engine CombatComponent::engine(seed());


CombatComponent::CombatComponent(std::shared_ptr<Object> owner)
    : Component(owner)
{
    attributes = owner->getComponent<AttributeComponent>();
}

std::shared_ptr<Object> CombatComponent::update()
{
    return owner;
}

int CombatComponent::attack()
{
    int damage = 1;

    std::uniform_int_distribution<int> damageRange(attributes->attackMin, attributes->attackMax);

    damage = damageRange(engine);

    float critC = attributes->critChance;
    if (critC > 1.f)
        critC = 1.f;
    else if (critC < 0.f)
        critC = 0.f;
    std::bernoulli_distribution critical(critC);
    if(critical(engine))
    {
        damage * 1.5; //critDamage
    }

    return damage;
}

int CombatComponent::defend(Object* attacker)
{
    AttributeComponent* attackerAttributes = attacker->getComponent<AttributeComponent>();
    int damage = attacker->getComponent<CombatComponent>()->attack();
    
    float dodge = 0.01f;
    if (attributes->evasion < attackerAttributes->accuracy) 
    {
        if(attributes->evasion !=0)
        dodge = 1 -(((attackerAttributes->accuracy/attributes->evasion)*75)/100); //base of 50. the ration between accuracy and evasion scales dodge chance.
        
        if(dodge < 0.01f) //min dodge is 1
            dodge = 0.01f;
    }
    else //evasion is => accuracy
    {
        dodge = (((attributes->evasion / attackerAttributes->accuracy) * 25) / 100);;
        if (dodge >= .99f) //99 percent is max
            dodge = .99f; 
    }
    std::bernoulli_distribution dodgeChance(dodge);
    
    if(dodgeChance(engine))
    {
        return 0;
    }
    
    damage -= attackerAttributes->defense;
    if(damage < 1)
    {
        damage = 1;
    }
    
    return damage; 
}
