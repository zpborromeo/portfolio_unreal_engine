#pragma once
#include "EngineData.h"
#include "View.h"

class Texture;
class GraphicsDevice;
class InputDevice;
class Library;
class Component;
class presets;
class PhysicsDevice;
class Constants;



class Object
{
public:
	Object();
	~Object();
	void removeObject();
	
	std::shared_ptr<Object> update();
	void draw(std::shared_ptr<View> view);
	//make bool
	void initialize(std::shared_ptr<EngineData> initData, std::shared_ptr<Object> player = nullptr);
	void addComponent(std::shared_ptr<Component> component_ptr);
	void save(tinyxml2::XMLElement* object);

	//Accessors
	template<class T>
	T* getComponent()
	{
		for (auto comp : components)
		{
			T* target = nullptr;
			if (target = dynamic_cast<T*>(comp.get()))
			{
				return target;
			}
		}
		return (nullptr);
	}

private:
	//make pointer later
	std::vector<std::shared_ptr<Component>> components;
	GAME_PHYSICS game_phy_obj;
	std::shared_ptr<PhysicsDevice> game_phy_dev;
};

