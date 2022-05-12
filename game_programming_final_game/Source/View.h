#pragma once
#include "Constants.h"

#include "InputDevice.h"
class GraphicsDevice;

class View
{

public:
	View(std::shared_ptr<InputDevice> input_device, Vector2D starting_pos, Vector2D ending_pos);
	~View();
	void update(const Vector2D& player_pos, std::shared_ptr<GraphicsDevice> graphics_device);

	std::shared_ptr<InputDevice> inputDevice;
	Vector2D center;
	Vector2D endOfLevel;
	Vector2D position;
};

