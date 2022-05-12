#pragma once

class GraphicsDevice;
class AudioDevice;
class TextDevice;
class PhysicsDevice;
class View;
class Library;

struct EngineData
{
	EngineData(std::shared_ptr<GraphicsDevice> gDevice, std::shared_ptr<AudioDevice> aDevice, std::shared_ptr<PhysicsDevice> pDevice, std::shared_ptr<TextDevice> tDevice,
		std::shared_ptr<Library> objectLibrary, std::shared_ptr<bool> nextLevel, std::shared_ptr<View> view)
		: gDevice(gDevice), aDevice(aDevice), tDevice(tDevice), pDevice(pDevice), objectLibrary(objectLibrary), nextLevel(nextLevel), view(view)
	{};
	std::shared_ptr<GraphicsDevice> gDevice;
	std::shared_ptr<AudioDevice> aDevice;
	std::shared_ptr<PhysicsDevice> pDevice;
	std::shared_ptr<Library> objectLibrary;
	std::shared_ptr<bool> nextLevel;
	std::shared_ptr<TextDevice> tDevice;
	std::shared_ptr<View> view;
};

