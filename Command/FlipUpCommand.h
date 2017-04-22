#pragma once

#include "Command.h"
#include "Light.h"

class FlipUpCommand: public Command 
{
public:

	FlipUpCommand(Light& light):theLight(light)
	{

	}

	virtual void execute()
	{
		theLight.turnOn();
	}

private:
	Light& theLight;
};
