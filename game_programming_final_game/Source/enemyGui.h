#pragma once
#include "Component.h"
#include "EngineData.h"
#include "Rectangle.h"

class AttributeComponent;
class PhysicsComponent;
class SpriteComponent;
class rectangle;


class enemyGui :
    public Component
{
public:

    enemyGui(std::shared_ptr<Object> owner);
    bool initialize(std::shared_ptr<EngineData> initData, std::shared_ptr<Object> player) override;
    // Inherited via Component
   std::shared_ptr<Object> update() override;
   void draw(std::shared_ptr<View> view) override;
private:
    
    std::shared_ptr<GraphicsDevice> gDevice;
    SDL_Surface* surface;

    //HelathBar
    std::unique_ptr<rectangle> healthBack;
    std::unique_ptr<rectangle> healthFront;
    int backWidth;
    int frontWidth;
    std::shared_ptr<View> view;

    AttributeComponent* ac;
    PhysicsComponent* pc;
    SpriteComponent* sc;
};

