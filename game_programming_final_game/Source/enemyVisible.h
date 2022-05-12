#pragma once
#include "LeafTask.h"

class BodyComponent;

class enemyVisible :
    public LeafTask
{
public:
    enemyVisible(std::shared_ptr<BehaviorTree> tree, std::shared_ptr<Task> control);
    ~enemyVisible();

    virtual void run() override;
    virtual bool addChildToTask(std::shared_ptr<Task> childTask) override;
private:
    std::shared_ptr<BodyComponent> bodyComponent;
};

