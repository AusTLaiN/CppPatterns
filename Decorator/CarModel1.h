#pragma once
#include <string>
#include <iostream>
#include "CommonCar.h"

class CarModel1 : public CommonCar
{       
        public:
                CarModel1()
                {
                        _str = "CarModel1";
                }
                virtual double getCost()
                {
                        return 31000.23;
                }
 
                ~CarModel1()
                {
                        cout<<"~CarModel1()\n";
                }
};

