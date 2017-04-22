#pragma once
#include <iostream>
#include "Record.h"
#include <string>
using namespace std;
class PersonRecord : public Record
{
private:
	string m_personName;
	int m_age;

public:
	PersonRecord(string personName, int age) : m_personName(personName), m_age(age)
	{
	}

	void print() override
	{
		cout << "Person Record" << endl
			<< "Name : " << m_personName << endl
			<< "Age  : " << m_age << endl << endl;
	}

	Record* clone() override
	{
		return new PersonRecord(*this);
	}
};

