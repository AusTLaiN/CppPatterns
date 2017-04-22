#pragma once
#include <string>
#include <iostream>
using namespace std;

class CommonCar
{
protected:
	string _str;
public:
	CommonCar()
	{
		_str = "Unknown Car";
	}

	virtual string getDescription()
	{
		return _str;
	}

	virtual double getCost() = 0;

	virtual ~CommonCar()
	{
		cout << "~Car()\n";
	}

};

