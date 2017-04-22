// Decorator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <string>
#include "CarModel1.h"
#include "Navigation.h"
#include "PremiumSoundSystem.h"
#include "ManualTransmission.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	  //Create our Car that we want to buy
        Car *b = new CarModel1();

        cout << "Base model of " << b->getDescription() << " costs $" << b->getCost() << "\n";  
            
        //Who wants base model let's add some more features
            
        b = new Navigation(b);
        cout << b->getDescription() << " will cost you $" << b->getCost() << "\n";
        b = new PremiumSoundSystem(b);
        b = new ManualTransmission(b);
        cout << b->getDescription() << " will cost you $" << b->getCost() << "\n";

	std::cin.get();

	return 0;
}

