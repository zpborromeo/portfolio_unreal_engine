#pragma once
#include "LeafTask.h"
class roaming :
    public LeafTask
{
public:
    roaming(std::shared_ptr<BehaviorTree> tree, std::shared_ptr<Task> control);
    ~roaming();
    bool initiailize(bool conditional, Vector2D& goal);
    // Inherited via LeafTask
    virtual void run() override;
    virtual bool addChildToTask(std::shared_ptr<Task> childTask) override;
    void setConditional(bool conditional);
private:
    bool conditional;
    Vector2D* goal;

    static std::random_device seed;
    static std::default_random_engine engine;
};

