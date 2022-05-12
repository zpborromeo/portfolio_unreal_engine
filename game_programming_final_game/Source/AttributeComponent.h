#pragma once
#include "Component.h"
class Object;
class AttributeComponent :
    public Component
{
public:
    AttributeComponent(int level, int level_max, std::shared_ptr<Object> owner);

    // Inherited via Component
    std::shared_ptr<Object> update() override;

    //Functions
    void addHealth(int health);
    void loseHeatlh(int damage);
    void addExp(int exp);
    void loseExp(int exp);

    void levelUp();
    void updateStats(const bool reset);
    void randomAttAssignment();
    int calculateExpNext();

    //Attributes
    int vitality;
    int strength;
    int dexterity;
    int agility;
    int intelligence;

    //public stats (so can be modified easier)
    int attackMin; //Min damage dealt
    int attackMax; //Max damge dealth
    float range; //distance can see enemies
    int accuracy;
    int defense; // damage blocked
    //int speed; // speed you move and attack
    float evasion; //chance to dodge
    float critChance;

    bool isDead;

    //listener updates (if necessary)
    bool levelUpdate;
    bool healthUpdate;
    bool expUpdate;

    //Stats
    int level; //level
    int levelMax;
    int health; // current health
    int maxHealth; // max health
    int exp; //current exp
    int expNext; //exp needed to level up
    int attributePoints;
    float levelBoostRate;
private:
    static std::random_device seed;
    static std::default_random_engine engine;
    bool isPlayer;

    

};

