// Adapter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Rectangle.h"
#include "RectangleAdapter.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Rectangle *r = new RectangleAdapter(120, 200, 60, 40);
	r->draw();

	std::cin.get();
	return 0;
}

