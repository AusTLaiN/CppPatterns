#pragma once
#include <string>
#include <iostream>
#include "CommonCar.h"

using namespace std;
class OptionsDecorator : public CommonCar //Decorator Base class
{
        public:
                virtual string getDescription() = 0;
 
                virtual ~OptionsDecorator()
                {
                        cout<<"~OptionsDecorator()\n";
                }
};

