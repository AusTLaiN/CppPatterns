// Singleton.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "SingletonClass.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

    SingletonClass* singleton = SingletonClass::GetInstance();
    cout << "The value of the singleton: " << singleton->a << endl;

	std::cin.get();

    return 0;
}
