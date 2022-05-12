#pragma once
#include "Constants.h"

class InputDevice
{
public:
	InputDevice();
	~InputDevice();
	enum class UserInputs
	{
		NA,
		UP,
		DOWN,
		LEFT,
		RIGHT,
		SPACE,
		SHIFT,
		MOUSE_MOVE,
		LEFT_CLICK,
		RIGHT_CLICK,
		DOUBLE_CLICK,
		B,
		QUIT,
		NUM_EVENTS
	};
	bool initialize(bool);
	bool getEvent(UserInputs gameEvent);
	Vector2D getMousePosition();
	bool update();
	UserInputs text2Input(std::string inputString);
	std::map<UserInputs, bool> keyStates;

private:
	std::unique_ptr<SDL_Event> event;
	UserInputs Translate();
	UserInputs TranslateMouse();
	Vector2D mousePosition{ 0,0 };

};