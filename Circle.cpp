#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include "Circle.h"

Circle::Circle()
{
	Circle::SetFaces(0);
	Circle::SetVertices(0);
	Circle::SetWidth(1);
	Circle::SetHeight(1);
}

Circle::Circle(double _diameter)
{
	Circle::SetFaces(0);
	Circle::SetVertices(0);
	Circle::SetWidth(_diameter);
	Circle::SetHeight(_diameter); 
}

 double Circle::GetArea()
{
	return (M_PI * pow((Circle::GetWidth() / 2.0), 2));
}

 double Circle::GetPerimeter()
{
	return (M_PI * Circle::GetWidth());
}