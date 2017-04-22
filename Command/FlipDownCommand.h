#pragma once
#include "Command.h"
#include "Light.h"
class FlipDownCommand: public Command
{
public:   
	FlipDownCommand(Light& light) :theLight(light)
	{

	}
	virtual void execute() 
	{
		theLight.turnOff();
	}
private:
	Light& theLight;
};

