#pragma once
#include "Quackbehaviour.h"
#include "SimpleQuack.h"
#include <iostream>
#include <memory>
using namespace std;
class Duck
{
protected:
	Quackbehaviour* quackbehaviour;

public:

	Duck()
	{
		this->quackbehaviour=new SimpleQuack();
	}

public:
	void Quack(){
		this->quackbehaviour->Quack();
	}
};

