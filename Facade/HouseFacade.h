#pragma once
#include "Alarm.h"
#include "TV.h"
#include "AirConditioner.h"
class HouseFacade
{
	Alarm alarm;
	AirConditioner ac;
	Tv tv;

public:
	HouseFacade(){}

	void goToWork()
	{
		ac.acOff();
		tv.tvOff();
		alarm.alarmOn();
	}

	void comeHome()
	{
		alarm.alarmOff();
		ac.acOn();
		tv.tvOn();
	}
};

