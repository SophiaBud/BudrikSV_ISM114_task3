#pragma once
#include "Shape.h"

/// <summary>
/// ����� ��� �����
/// </summary>
class Circle : public Shape 
{
private:
	unsigned side = 0;
public:
	Circle();
	Circle(double _diameter); // ������� ����� (����� ��� ������ � ������) = �������� �������
	double GetArea();
	double GetPerimeter();
};