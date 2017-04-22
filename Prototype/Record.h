#pragma once
#include <memory>

class Record
{
public:
	virtual ~Record() {}
	virtual void print() = 0;
	virtual Record* clone() = 0;
};


