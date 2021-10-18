#pragma once
#include "Rectangle.h"

Rectangle::Rectangle()
{
	Rectangle::SetFaces(side);
	Rectangle::SetVertices(side);
	Rectangle::SetWidth(1);
	Rectangle::SetHeight(1);
}

Rectangle::Rectangle(double _width, double _height) 
{
	Rectangle::SetFaces(side);
	Rectangle::SetVertices(side);
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