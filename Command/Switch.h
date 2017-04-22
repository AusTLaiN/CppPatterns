#pragma once
#include "Command.h"
#include "Light.h"

class Switch {
public:
	Switch(Command& flipUpCmd, Command& flipDownCmd)
	:flipUpCommand(flipUpCmd),flipDownCommand(flipDownCmd)
	{

	}

	void flipUp()
	{
		flipUpCommand.execute();
	}

	void flipDown()
	{
		flipDownCommand.execute();
	}

private:
	Command& flipUpCommand;
	Command& flipDownCommand;
};


