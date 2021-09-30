#pragma once
#define _USE_MATH_DEFINES

#include "Circle.h"
#include <cmath>

Circle::Circle(double _diameter)
{
	Circle::SetFaces(0);
	Circle::SetVertices(0);
	Circle::SetWidth(_diameter);
	Circle::SetHeight(_diameter); 
}

double Circle::GetArea()
{
	return ((double)M_PI * pow((Circle::GetWidth() / 2.0), 2));
}

double Circle::GetPerimeter()
{
	return ((double)M_PI * Circle::GetWidth());
}