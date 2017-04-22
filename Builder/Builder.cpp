// Patterns.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <memory>
#include "Pizza.h"
#include "HawaiianPizzaBuilder.h"
#include "SpicyPizzaBuilder.h"
#include "Cook.h"

using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{
	Cook cook;
	HawaiianPizzaBuilder hawaiianPizzaBuilder;
	SpicyPizzaBuilder    spicyPizzaBuilder;

	cook.makePizza(&hawaiianPizzaBuilder);
	cook.openPizza();

	cook.makePizza(&spicyPizzaBuilder);
	cook.openPizza();

	std::cin.get();
	return 0;
}

