#pragma once
#include "Shape.h"

/// <summary>
/// ����� ��� ��������������
/// </summary>
class Rectangle : virtual public Shape 
{
private:
	unsigned side = 4;
public:
	Rectangle();
	Rectangle(double _width, double _height);
	double GetArea();
	double GetPerimeter();
};