#pragma once
#include <string>
#include "CommonCar.h"
#include "OptionsDecorator.h"
#include <iostream>
using namespace std;

class ManualTransmission: public OptionsDecorator
{
                CommonCar *_b;
        public:
                ManualTransmission(CommonCar *b)
                {
                        _b = b;
                }
                string getDescription()
                {
		        return _b->getDescription()+ ", ManualTransmission";
                }
 
                double getCost()
                {
                        return 0.30 + _b->getCost();
                }
                ~ManualTransmission()
                {
                        cout << "~ManualTransmission()\n";
                        delete _b;
                }
};

