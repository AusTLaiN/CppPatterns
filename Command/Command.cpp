// Command.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "FlipDownCommand.h"
#include "FlipUpCommand.h"
#include "Light.h"
#include "Switch.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Light lamp;
	FlipUpCommand switchUp(lamp);
	FlipDownCommand switchDown(lamp);

	Switch s(switchUp, switchDown);
	s.flipUp();
	s.flipDown();

	cin.get();
	return 0;
}

