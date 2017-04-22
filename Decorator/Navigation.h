#pragma once
#include <string>
#include "CommonCar.h"
#include "OptionsDecorator.h"
#include <iostream>
using namespace std;

class Navigation: public OptionsDecorator
{
                CommonCar *_b;
        public:
                Navigation(CommonCar *b)
                {
                        _b = b;
                }
                string getDescription()
                {
                        return _b->getDescription() + ", Navigation";
                }
 
                double getCost()
                {
                        return 300.56 + _b->getCost();
                }
                ~Navigation()
                {
                        cout << "~Navigation()\n";
                        delete _b;
                }
};