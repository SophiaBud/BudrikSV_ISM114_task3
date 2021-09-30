#pragma once
#include "Shape.h"

#ifndef TRIANGLE_H
#define TRIANGLE_H
#endif

/// <summary>
/// ����� ������������
/// </summary>
class Triangle : public Shape 
{
public:
	Triangle(double _width, double _height);
	
	double GetArea();
	double GetPerimeter();
};