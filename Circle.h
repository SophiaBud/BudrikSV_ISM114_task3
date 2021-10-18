#pragma once
#include "Shape.h"

/// <summary>
/// Класс для круга
/// </summary>
class Circle : public Shape 
{
private:
	unsigned side = 0;
public:
	Circle();
	Circle(double _diameter); // диаметр круга (также его ширина и высота) = половине радиуса
	double GetArea();
	double GetPerimeter();
};
