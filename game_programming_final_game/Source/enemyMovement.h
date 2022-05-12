#pragma once
#include "Component.h"

enum class EnemyFacing {ENEMY_IDLE = 0, ENEMY_UP, ENEMY_DOWN, ENEMY_LEFT, ENEMY_RIGHT};
class Timer;

class enemyMovement :
    public Component
{
public:
    //Constructor
    enemyMovement(std::shared_ptr<Object> owner, float maxVelocity);
    
    //Functions
    std::shared_ptr<Object> update();

    //Accessors
    const EnemyFacing& getEnemyFacing() const;

    //Setters
    void setFacingDirection(EnemyFacing newDirection);

private:
  
    bool MOVING;
    const float maxVelocity; //max Speed for object
    float acceleration = 10.f; // acceleration for object
    float deceleration = .05f; //deceleration for object
    EnemyFacing currentDirection; //direction for animation
    //Jump Timer
    std::unique_ptr<Timer> keyTimer;
    float keyTime;
};

