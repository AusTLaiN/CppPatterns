#pragma once
#include "Quackbehaviour.h"
#include <iostream>
using namespace std;

class SimpleQuack:public Quackbehaviour
{
	public:
		virtual void  Quack(){

			cout<<"Simple quack\n";

	}
};

