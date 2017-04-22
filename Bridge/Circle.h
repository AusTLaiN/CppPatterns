#pragma once
#include "DrawingAPI.h"

class Circle
{
 public:
   Circle(double x, double y,double radius, DrawingAPI *drawingAPI) :
	   m_x(x), m_y(y), m_radius(radius), m_drawingAPI(drawingAPI)
   {}
   void draw() {
      m_drawingAPI->drawCircle(m_x, m_y, m_radius);
   }
  private:
   double m_x, m_y, m_radius;
   DrawingAPI *m_drawingAPI;
};

