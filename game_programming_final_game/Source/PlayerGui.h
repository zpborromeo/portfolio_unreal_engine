#pragma once
#include "EngineData.h"
class Object;

class AttributeComponent;
#include "Rectangle.h"


class PlayerGui
{
public:
	PlayerGui(std::shared_ptr<EngineData> initData, std::shared_ptr<Object> player);
	void draw();
	void setAc(AttributeComponent* attributeComponent);

private:
	std::shared_ptr<GraphicsDevice> gDevice;
	SDL_Surface* surface;
	AttributeComponent* ac;
	int backWidth;
	int frontWidth;
	
	//HelathBar
	std::unique_ptr<rectangle> healthBack;
	std::unique_ptr<rectangle> healthFront;
};

