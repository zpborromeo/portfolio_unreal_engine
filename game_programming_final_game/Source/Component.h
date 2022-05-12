#pragma once

class Object;
class View;
class GraphicsDevice;
class Library;
struct EngineData;

class Component
{
public:

	Component(std::shared_ptr<Object> owner);
	~Component() {};
	virtual std::shared_ptr<Object> update() = 0;
	virtual bool initialize(std::shared_ptr<EngineData> initData, std::shared_ptr<Object> player) { return true; };
	virtual void draw(std::shared_ptr<View> view) {};
	virtual void save(tinyxml2::XMLElement* object) {};
	std::shared_ptr<Object> getOwner();

protected:
	 std::shared_ptr<Object> owner;

};

