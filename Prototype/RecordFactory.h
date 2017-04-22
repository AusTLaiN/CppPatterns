#pragma once
#include <iostream>
#include <unordered_map>
#include <string>
#include <memory>
#include "Record.h"
#include "CarRecord.h"
#include "BikeRecord.h"
#include "PersonRecord.h"

using namespace std;

enum RecordType
{
	CAR,
	BIKE,
	PERSON
};

/** RecordFactory is the client */
class RecordFactory
{
private:
	unordered_map<RecordType, Record*, hash<int> > m_records;

public:
	RecordFactory()
	{
		m_records[CAR]    = new CarRecord("Ferrari", 5050);
		m_records[BIKE]   = new BikeRecord("Yamaha", 2525);
		m_records[PERSON] = new PersonRecord("Tom", 25);
	}

	Record* createRecord(RecordType recordType)
	{
		return m_records[recordType]->clone();
	}
};

