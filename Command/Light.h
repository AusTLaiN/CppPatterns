#pragma once
#include <iostream>

using namespace std;

class Light {

public:
	Light() {  }

	void turnOn() 
	{
		cout << "The light is on" << endl;
	}

	void turnOff() 
	{
		cout << "The light is off" << endl;
	}
};

