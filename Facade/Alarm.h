#pragma once
#include <string>
#include <iostream>

using namespace std;

class Alarm
{
public:
	void alarmOn()
	{
		cout << "Alarm is on and house is secured"<<endl;
	}

	void alarmOff()
	{
		cout << "Alarm is off and you can go into the house"<<endl;
	}
};