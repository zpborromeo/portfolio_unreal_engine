#include "pch.h"
#include "InputDevice.h"

InputDevice::InputDevice() {
	event = std::make_unique<SDL_Event>();
	if (!event) {
		printf("SDL Event could not initialize!");
		exit(1);
	}

	keyStates[UserInputs::NA] = false;
	keyStates[UserInputs::DOWN] = false;
	keyStates[UserInputs::UP] = false;
	keyStates[UserInputs::LEFT] = false;
	keyStates[UserInputs::RIGHT] = false;
	keyStates[UserInputs::SPACE] = false;
	keyStates[UserInputs::QUIT] = false;
	keyStates[UserInputs::SHIFT] = false;
	keyStates[UserInputs::B] = false;
	keyStates[UserInputs::LEFT_CLICK] = false;
	keyStates[UserInputs::RIGHT_CLICK] = false;
	update();
}

InputDevice::~InputDevice() {

}

bool InputDevice::initialize(bool) {
	return false;	//idk what to put here
}

bool InputDevice::getEvent(UserInputs gameEvent)
{
	return keyStates[gameEvent];
}


Vector2D InputDevice::getMousePosition()
{
	return mousePosition;
}

InputDevice::UserInputs InputDevice::Translate()
{
	//This switch is here in case we want to add other events, such as mouse events.
	switch (event->key.keysym.sym)
	{
	case SDLK_LEFT:
	case SDLK_a:
		return UserInputs::LEFT;
		break;
	case SDLK_RIGHT:
	case SDLK_d:
		return UserInputs::RIGHT;
		break;
	case SDLK_UP:
	case SDLK_w:
		return UserInputs::UP;
		break;
	case SDLK_DOWN:
	case SDLK_s:
		return UserInputs::DOWN;
		break;
	case SDLK_SPACE:
		return UserInputs::SPACE;
		break;
	case SDLK_RSHIFT:
	case SDLK_LSHIFT:
		return UserInputs::SHIFT;
		break;
	case SDLK_b:
		return UserInputs::B;
		break;
	case SDLK_ESCAPE:
		return UserInputs::QUIT;
		break;
	case SDL_BUTTON_LEFT:
		return UserInputs::LEFT_CLICK;
		break;
	case SDL_BUTTON_RIGHT:
		return UserInputs::RIGHT_CLICK;
		break;
	}

	return UserInputs::NA;
}

InputDevice::UserInputs InputDevice::TranslateMouse()
{
	switch (event->button.button)
	{
	case SDL_BUTTON_LEFT:
		return UserInputs::LEFT_CLICK;
		break;
	case SDL_BUTTON_RIGHT:
		return UserInputs::RIGHT_CLICK;
		break;
	}

	return UserInputs::NA;
}

bool InputDevice::update(){
	UserInputs gEvent;
	if (SDL_PollEvent(event.get()))
	{
		//updates the proper key state based on the event that was passed in
		switch (event->type)
		{
		case SDL_KEYDOWN:
			//translates the SDL even to a game event.
			gEvent = Translate();
			keyStates.find(gEvent)->second = true;
			return true;
			break;
		case SDL_MOUSEBUTTONDOWN:
			gEvent = TranslateMouse();
			keyStates.find(gEvent)->second = true;
			break;
		case SDL_KEYUP:
		
			//translates the SDL even to a game event.
			gEvent = Translate();
			keyStates.find(gEvent)->second = false;
			return true;
			break;
			/*switch (event->button.button)
			{
			case SDL_BUTTON_LEFT:
				keyStates.find(UserInputs::LEFT_CLICK)->second = true;
				break;
			case SDL_BUTTON_RIGHT:
				keyStates.find(UserInputs::RIGHT_CLICK)->second = true;
				break;
			}
			break;*/
			/*switch (event->button.button)
			{
			case SDL_BUTTON_LEFT:
				keyStates.find(UserInputs::LEFT_CLICK)->second = false;
				break;
			case SDL_BUTTON_RIGHT:
				keyStates.find(UserInputs::RIGHT_CLICK)->second = true;
				break;
			}
			break;*/
		case SDL_MOUSEBUTTONUP:
			gEvent = TranslateMouse();
			keyStates.find(gEvent)->second = false;
			break;
		case SDL_MOUSEMOTION:
			mousePosition.x = (float)event->motion.x; //removed (eFloat) from before event
			mousePosition.y = (float)event->motion.y; //removed (eFloat) from before event
			break;
		case SDL_QUIT:
			keyStates.find(UserInputs::QUIT)->second = true;
			return false;
			break;
		default:
			break;
		}
	}
	return false;
}
