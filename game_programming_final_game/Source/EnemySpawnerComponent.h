#pragma once
#include "Component.h"

class Object;
class GraphicsDevice;
class InputDevice;
class Library;
class Texture;

class EnemySpawnerComponent :
    public Component
{
public:
    
    EnemySpawnerComponent(int number_of_enemies, std::shared_ptr<Object> owner);
    bool initialize(std::shared_ptr<EngineData> initData, std::shared_ptr<Object> player) override;
    
    std::shared_ptr<Object> update();
    void draw(std::shared_ptr<View> view);
    void handleEvent(std::shared_ptr<InputDevice> input_dev);

private:
    std::vector<std::shared_ptr<Object>> enemies;
    std::shared_ptr<EngineData> engineData;
    std::shared_ptr<Object> player;
    Vector2D spawnPosition;
    int maxNumEnemies;
    int currNumEnemies;
};

