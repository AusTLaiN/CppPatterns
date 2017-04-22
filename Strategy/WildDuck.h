#pragma once
#include "Duck.h"
#include "ExoticQuack.h"
class WildDuck:public Duck
{
public:

	WildDuck(void)
	{
		this->quackbehaviour=new ExoticQuack();

	}

	
};

