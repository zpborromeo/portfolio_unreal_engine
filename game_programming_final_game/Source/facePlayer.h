#pragma once
#include "LeafTask.h"
class facePlayer :
    public LeafTask
{
public:
    facePlayer(std::shared_ptr<BehaviorTree> tree, std::shared_ptr<Task> control);
    ~facePlayer();
    bool initiailize(bool conditional, Vector2D& goal);
    // Inherited via LeafTask
    virtual void run() override;
    virtual bool addChildToTask(std::shared_ptr<Task> childTask) override;
    void setConditional(bool conditional);
private:
    bool conditional;
    Vector2D* goal;
};

