#pragma once
#include "Quackbehaviour.h"
#include <iostream>
using namespace std;

class ExoticQuack:public Quackbehaviour
{

	public:
		virtual void  Quack(){

			cout<<"Exotic quack\n";

	}
};

