// Facade.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include "HouseFacade.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{	
	HouseFacade hf;

	//Rather than calling 100 different on and off functions thanks to facade I only have 2 functions...
	cout<<"Go to work ...\n";
	hf.goToWork();
	cout<<"Go to work ...\n";
	hf.comeHome();

	cin.get();
	return 0;
}

