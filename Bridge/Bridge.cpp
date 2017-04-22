// Bridge.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Circle.h"
#include <iostream>
#include "DrawingAPI1.h"
#include "DrawingAPI2.h"

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{

   Circle circle1(1,2,3,new DrawingAPI1());
   Circle circle2(5,7,11,new DrawingAPI2());

   circle1.draw();
   circle2.draw();

   cin.get();
	return 0;
}

