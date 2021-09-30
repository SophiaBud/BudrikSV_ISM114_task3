#pragma once
#include "Rectangle.h"

Rectangle::Rectangle(double _width, double _height) 
{
	Rectangle::SetFaces(4);
	Rectangle::SetVertices(4);
	Rectangle::SetWidth(_width);
	Rectangle::SetHeight(_height);
}

double Rectangle::GetArea()
{
	return (Rectangle::GetWidth() * Rectangle::GetHeight());
}

double Rectangle::GetPerimeter()
{
	return ((Rectangle::GetWidth() * 2.0) + (Rectangle::GetHeight() * 2.0));
}