#pragma once
#include <iostream>
#include "Record.h"
#include <string>
using namespace std;

class BikeRecord : public Record
{
private:
	string m_bikeName;
	int m_ID;

public:
	BikeRecord(string bikeName, int ID) : m_bikeName(bikeName), m_ID(ID)
	{
	}

	void print() override
	{
		cout << "Bike Record" << endl
		     << "Name  : " << m_bikeName << endl
		     << "Number: " << m_ID << endl << endl;
	}

	Record* clone() override
	{
		return new BikeRecord(*this);
	}
};

