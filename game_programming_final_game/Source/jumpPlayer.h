#pragma once
#include "LeafTask.h"

class Timer;

class jumpPlayer :
    public LeafTask
{
public:
    jumpPlayer(std::shared_ptr<BehaviorTree> tree, std::shared_ptr<Task> control);
    ~jumpPlayer();
    bool initiailize(bool conditional, Vector2D& goal);
    // Inherited via LeafTask
    virtual void run() override; //jump method or something
    virtual bool addChildToTask(std::shared_ptr<Task> childTask) override;
    void setConditional(bool conditional);
private:
    bool conditional;
    Vector2D* goal;
    float acceleration = 600.f; // acceleration for object
    float deceleration = .05f; //deceleration for object
    //Jump Timer
    std::unique_ptr<Timer> keyTimer;
    float keyTime;
};

