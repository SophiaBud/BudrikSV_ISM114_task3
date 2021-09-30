#pragma once
#include "Shape.h"

#ifndef CIRCLE_H
#define CIRCLE_H
#endif

/// <summary>
/// Класс для круга
/// </summary>
class Circle : public Shape 
{
public:
	Circle(double _diameter); // диаметр круга (также его ширина и высота) = половине радиуса
	double GetArea();
	double GetPerimeter();
};