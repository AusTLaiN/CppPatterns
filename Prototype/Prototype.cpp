// Prototype.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "RecordFactory.h"


int _tmain(int argc, _TCHAR* argv[])
{

	RecordFactory recordFactory;

	auto record = recordFactory.createRecord(CAR);
	record->print();

	record = recordFactory.createRecord(BIKE);
	record->print();

	record = recordFactory.createRecord(PERSON);
	record->print();


	std::cin.get();

	return 0;
}

