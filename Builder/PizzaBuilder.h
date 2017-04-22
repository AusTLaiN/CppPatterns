#pragma once
#include "Pizza.h"
#include <string>
#include <iostream>
#include <memory>

using namespace std;


class PizzaBuilder
{
public:
	virtual ~PizzaBuilder() {};

	Pizza* getPizza()
	{
		return m_pizza;
	}
	void createNewPizzaProduct()
	{
		m_pizza = new Pizza();
	}
	virtual void buildDough() = 0;
	virtual void buildSauce() = 0;
	virtual void buildTopping() = 0;
protected:
	Pizza* m_pizza;
};

