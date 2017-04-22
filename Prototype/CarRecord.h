#pragma once
#include <iostream>
#include "Record.h"
#include <string>
using namespace std;

class CarRecord : public Record
{
private:
	string m_carName;
	int m_ID;

public:
	CarRecord(string carName, int ID) : m_carName(carName), m_ID(ID)
	{
	}

	void print() override
	{
		cout << "Car Record" << endl
		     << "Name  : "   << m_carName << endl
		     << "Number: "   << m_ID << endl << endl;
	}

	Record* clone() override
	{
		return new CarRecord(*this);
	}
};

