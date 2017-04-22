#pragma once
#include <string>
#include "CommonCar.h"
#include "OptionsDecorator.h"
#include <iostream>
using namespace std;
class PremiumSoundSystem: public OptionsDecorator
{
                CommonCar *_b;
        public:
                PremiumSoundSystem(CommonCar *b)
                {
                        _b = b;
                }
                string getDescription()
                {
                        return _b->getDescription() + ", PremiumSoundSystem";
                }
 
                double getCost()
                {
                        return 0.30 + _b->getCost();
                }
                ~PremiumSoundSystem()
                {
                        cout << "~PremiumSoundSystem()\n";
                        delete _b;
                }
};
