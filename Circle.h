#pragma once
#include "Shape.h"

#ifndef CIRCLE_H
#define CIRCLE_H
#endif

/// <summary>
/// ����� ��� �����
/// </summary>
class Circle : public Shape 
{
public:
	Circle(double _diameter); // ������� ����� (����� ��� ������ � ������) = �������� �������
	double GetArea();
	double GetPerimeter();
};