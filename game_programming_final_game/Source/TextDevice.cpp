#include "pch.h"
#include "TextDevice.h"
#include "Library.h"
#include "GraphicsDevice.h"
#include "TextTag.h"

TextDevice::TextDevice(std::shared_ptr<Library> objectLibrary, GraphicsDevice& gDevice)
	:gDevice(gDevice)
{
	fontLibrary = objectLibrary;

	if(TTF_Init() != 0)
	{
		std::cout << "ERROR::FONTDEVICE::TTF INIT Failed \n";
		exit(1);
	}
	
}

TextDevice::~TextDevice()
{
	
	TTF_Quit();
}

bool TextDevice::addTextTag(std::string fontName, int r, int g, int b, int xPos, int yPos, std::string* message, bool destroy)
{
	this->font = fontLibrary->findFont(fontName);
	if (font == nullptr)
	{
		std::cout << "ERROR::FONTDEVICE::FONT NAME NOT FOUND \n";
		return false;
	}

	//tags.push_back(std::make_shared<TextTag>(r, g, b, xPos, yPos, font, message, destroy));
	
	return true;
}

bool TextDevice::addTextTag(std::string fontName, int r, int g, int b, int xPos, int yPos, std::string message, bool destroy)
{
	this->font = fontLibrary->findFont(fontName);
	if (font == nullptr)
	{
		std::cout << "ERROR::FONTDEVICE::FONT NAME NOT FOUND \n";
		return false;
	}

	tags.push_back(std::make_shared<TextTag>(r,g,b,xPos,yPos,font, message, destroy));

	return true;
}

bool TextDevice::addTextTag(std::string fontName, int r, int g, int b, int xPos, int yPos, int message, bool destroy)
{
	this->font = fontLibrary->findFont(fontName);
	if (font == nullptr)
	{
		std::cout << "ERROR::FONTDEVICE::FONT NAME NOT FOUND \n";
		return false;
	}
	std::stringstream ss;
	ss << message;
	tags.push_back(std::make_shared<TextTag>(r, g, b, xPos, yPos, font, ss.str(), destroy));

	return true;
}

void TextDevice::draw()
{
	auto it = tags.begin();
	while(it!= tags.end())
	{
		if (!it->get()->draw(gDevice)) 
		{
			it = tags.erase(it);
		}
		else
		{
			++it;
		}
	}
}
