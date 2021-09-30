#pragma once
#include "Shape.h"
#ifndef RECTANGLE_H
#define RECTANGLE_H
#endif

/// <summary>
/// ����� ��� ��������������
/// </summary>
class Rectangle : public Shape 
{
public:
	Rectangle(double _width, double _height);
	double GetArea();
	double GetPerimeter();
};