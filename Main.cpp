#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main() 
{
	system("chcp 1251");
	system("cls");

	int num;
	double triangleWidth, triangleHeight;
	double rectangleHeight, rectangleWidth;
	double circleDiameter;

	Circle ourCircle;
	Rectangle ourRectangle;
	Triangle ourTriangle;

	while (true)
	{
		cout << "Выберите фигуру." << endl;
		cout << "1 - Круг" << endl;
		cout << "2 - Прямоугольник" << endl;
		cout << "3 - Прямоугольный треугольник" << endl;
		cout << "Другой номер - выход." << endl;
		cin >> num;
		if (num == 1)
		{
			cout << "Введите диаметр круга: ";
			cin >> circleDiameter;
			ourCircle = Circle(circleDiameter);
			cout << "Площадь: " << ourCircle.GetArea() << endl;
			cout << "Периметр: " << ourCircle.GetPerimeter() << endl;
		}
		else if (num == 2)
		{
			cout << "Введите ширину прямоугольника: ";
			cin >> rectangleWidth;
			cout << endl;
			cout << "Введите длину прямоугольника: ";
			cin >> rectangleHeight;
			ourRectangle = Rectangle(rectangleWidth, rectangleHeight);
			cout << "Сторон: " << ourRectangle.GetFaces() << endl;
			cout << "Вершин: " << ourRectangle.GetVertices() << endl;
			cout << "Площадь: " << ourRectangle.GetArea() << endl;
			cout << "Периметр: " << ourRectangle.GetPerimeter() << endl;
		}
		else if (num == 3)
		{
			cout << "Введите длину первого катета: ";
			cin >> triangleWidth;
			cout << endl;
			cout << "Введите длину второго катета: ";
			cin >> triangleHeight;
			ourTriangle = Triangle(triangleWidth, triangleHeight);
			cout << "Сторон: " << ourTriangle.GetFaces() << endl;
			cout << "Вершин: " << ourTriangle.GetVertices() << endl;
			cout << "Площадь: " << ourTriangle.GetArea() << endl;
			cout << "Периметр: " << ourTriangle.GetPerimeter() << endl;
		}
		else
			break;
	}
	
	system("pause");

	return 0;
}