#include "pch.h"
#include "View.h"
#include "InputDevice.h"
#include "GraphicsDevice.h"

View::View(std::shared_ptr<InputDevice> input_device, Vector2D starting_pos, Vector2D endingPosition) {
	center.x = starting_pos.x;
	center.y = starting_pos.y;
	position.x = center.x;
	position.y = center.y;
	endOfLevel.x = endingPosition.x;
	endOfLevel.y = endingPosition.y;
	inputDevice = input_device;
}
View::~View() {

}

void View::update(const Vector2D& player_pos, std::shared_ptr<GraphicsDevice> graphics_device)
{

	if (player_pos.x < endOfLevel.x)
	{
		//Updates center based on player pos
		center.x = player_pos.x - (graphics_device->getWidth() / 2) + 32;
		if (center.x < 0)
			center.x = 0;

		position.x = center.x - (graphics_device->getWidth() / 2) - 32;

		//std::cout << "Center x " << center.x << "Player X " << player_pos.x << std::endl;
		//std::cout << "Center y " << center.y << "Player Y " << player_pos.y << std::endl;
	}
}
