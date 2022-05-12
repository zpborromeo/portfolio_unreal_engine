#include "pch.h"
#include "AttributeComponent.h"
#include "Object.h"
#include "PhysicsComponent.h"

std::random_device AttributeComponent::seed;
std::default_random_engine AttributeComponent::engine(seed());

AttributeComponent::AttributeComponent(int level, int level_max, std::shared_ptr<Object> owner)
	: Component(owner), level(level), levelMax(level_max), isDead(false), isPlayer(false)
{
	expNext = 50;
	vitality = 1;
	strength = 1;
	dexterity = 1;
	agility = 1;
	intelligence = 1;
	levelBoostRate = 1.f;
	critChance = .01f;
	attributePoints = 3;
	range = 30;
	updateStats(true);
	for (int i = 0; i < level; i++)
	{
		levelUp();
	}
	updateStats(true);
	
	if (owner->getComponent<PhysicsComponent>()->getBodyPhysics().category == CATEGORY_PLAYER || owner->getComponent<PhysicsComponent>()->getBodyPhysics().category == CATEGORY_BOSS)
	{
		isPlayer = true;
	}
}


void AttributeComponent::levelUp()
{
	++level;
	int attributeCap = 50;
	if (level <= attributeCap)
		attributePoints += 2 + (level / 5);
	else
		attributePoints += 2 + (attributeCap / 5);
	vitality += 1;
	strength += 1;
	dexterity += 1;
	agility += 1;
	intelligence += 1;
	//if we wanted to add classes could use a function to distribute attributes from there, for now just gonna make random. 
	randomAttAssignment();
}

void AttributeComponent::updateStats(const bool reset)
{
	levelUpdate = true;
	healthUpdate = true;


	if (level % 10 == 0) {
		switch (level)
		{
		case(10):
			levelBoostRate = 1.1f;
			break;
		case(20):
			levelBoostRate = 1.2f;
			break;
		case(30):
			levelBoostRate = 1.3f;
			break;
		case(40):
			levelBoostRate = 1.4f;
			break;
		case(50):
			levelBoostRate = 1.8f;
			break;
		case(80):
			levelBoostRate = 2.5f;
			break;
		case(100):
			levelBoostRate = 4.f;
			break;
		}
	}
	maxHealth = 70 + (int)(level * levelBoostRate * 10) + (vitality * 10) + (strength * 5) + (intelligence * 5); //base 100
	attackMax = ((4 + strength * 4 + agility * 2) + strength / 2); //base 10
	attackMin = ((4 + strength * 4 + agility * 2) + strength / 4); //base 10
	accuracy = dexterity * 4 + agility * 2; //base 8
	range = (float)intelligence * 4.f + (float)dexterity * 2.f;
	defense = strength * 2 + agility / 3; // base 2
	critChance = ((dexterity * 2 + agility * 2 - vitality * 2 + intelligence - strength) / 2.f) / 100.f; // base 1%
	evasion = agility * 4 + dexterity * 2;


	if (reset)
	{
		health = maxHealth;
	}
}

void AttributeComponent::randomAttAssignment()
{
	std::uniform_int_distribution<int> attributeDivider(0, 4);
	while (attributePoints > 0)
	{
		switch (attributeDivider(engine))
		{
		case(0):
			++vitality;
			break;
		case(1):
			++strength;
			break;
		case(2):
			++dexterity;
			break;
		case(3):
			++agility;
			break;
		case(4):
			++intelligence;
			break;
		default:
			++vitality;
			break;

		}
		--attributePoints;
	}
}

int AttributeComponent::calculateExpNext()
{
	return (50 + (50 / 3) * static_cast<int>(static_cast<int>(pow(level, 3)) - 6 * static_cast<int>(pow(level, 2)) + (level * 17) - 12));
}

std::shared_ptr<Object> AttributeComponent::update()
{
	if (isPlayer)
	{
		
	}
	else
	{
		if (isDead) {
			return nullptr; //kills object
		}
	}
	return owner;
}

void AttributeComponent::addHealth(int health)
{
	this->health += health; 
	if (this->health > maxHealth)
		this->health = maxHealth;
}

void AttributeComponent::loseHeatlh(int damage)
{
	health -= damage;
	if (health < 0) {
		health = 0;
		isDead = true;
	}
}

void AttributeComponent::addExp(int exp)
{
	if (level < levelMax) {
		this->exp += exp;
		while (exp >= expNext)
		{
			exp -= expNext;
			levelUp();
			expNext = calculateExpNext();
		}
	}
	else {
		exp = expNext + 1; //to break loop and set exp
	}
}

void AttributeComponent::loseExp(int exp)
{
	this->exp -= exp;
	if (this->exp < 0) //can't level down
		this->exp = 0;

}

