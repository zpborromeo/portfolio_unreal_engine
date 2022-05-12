#pragma once
#include "LeafTask.h"
class attackPlayer :
    public LeafTask
{
public:
    attackPlayer(std::shared_ptr<BehaviorTree> tree, std::shared_ptr<Task> control);
    ~attackPlayer();
    bool initiailize(bool conditional, Vector2D& goal);
    // Inherited via LeafTask
    virtual void run() override; //attack method or something
    virtual bool addChildToTask(std::shared_ptr<Task> childTask) override;
    void setConditional(bool conditional);
private:
    bool conditional;
    Vector2D* goal;
};

