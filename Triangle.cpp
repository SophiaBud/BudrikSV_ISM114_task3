#pragma once
#include "Triangle.h"

Triangle::Triangle(double _width, double _height)
{
  Triangle::SetFaces(3);
  Triangle::SetVertices(3);
  Triangle::SetWidth(_width);
  Triangle::SetHeight(_height);
}

double Triangle::GetArea()
{
	return ((Triangle::GetWidth() * Triangle::GetHeight()) / 2.0);
}

double Triangle::GetPerimeter()
{
	return (Triangle::GetWidth() + (Triangle::GetHeight() * 2.0));
}