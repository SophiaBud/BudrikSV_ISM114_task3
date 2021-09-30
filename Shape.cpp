#pragma once
#include "Shape.h"
#include <iostream>

void Shape::SetFaces(int _faces) 
{
	Shape::faces = _faces;
}

void Shape::SetVertices(int _vertices)
{
	Shape::vertices = _vertices;
}

void Shape::SetWidth(double _width)
{
	Shape::width = _width;
}

void Shape::SetHeight(double _height) 
{
	Shape::height = _height;
}

int Shape::GetFaces()
{
	return Shape::faces;
}

int Shape::GetVertices() 
{
	return Shape::vertices;
}

double Shape::GetWidth()
{
	return Shape::width;
}

double Shape::GetHeight()
{
	return Shape::height;
}

double Shape::GetArea()
{
	return 0;
}

double Shape::GetPerimeter() 
{
	return 0;
}