#pragma once
#include <string>
#include <iostream>
#include "DrawingAPI.h"
using namespace std;


class DrawingAPI1 : public DrawingAPI {
  public:
   void drawCircle(double x, double y, double radius) {
      cout << "API1.circle at " << x << ':' << y << ' ' << radius << endl;
   }
};

