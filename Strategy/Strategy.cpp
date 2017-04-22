// Strategy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "WildDuck.h"
#include "WoodenDuck.h"
int _tmain(int argc, _TCHAR* argv[])
{
	WildDuck* wildduck=new WildDuck();
	wildduck->Quack();

	WoodenDuck* woodenduck=new WoodenDuck();
	woodenduck->Quack();

	cin.get();

	return 0;
}

