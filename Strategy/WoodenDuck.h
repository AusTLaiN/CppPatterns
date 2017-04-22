#pragma once
#include "Duck.h"
#include "NoQuack.h"
class WoodenDuck:public Duck
{
public:

	WoodenDuck(void)	
	{
		this->quackbehaviour=new NoQuack();
	}

	
};

