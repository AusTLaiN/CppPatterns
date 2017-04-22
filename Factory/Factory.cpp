// Factory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ComputerFactory.h"

int _tmain(int argc, _TCHAR* argv[])
{
	ComputerFactory factory;
	factory.NewComputer("laptop");
	factory.NewComputer("desktop");

	std::cin.get();

	return 0;
}

