#pragma once
#include "Quackbehaviour.h"
#include <iostream>
using namespace std;
class NoQuack:public Quackbehaviour
{
	public:
		virtual void  Quack(){

			cout<<"No quack\n";

	}
};

