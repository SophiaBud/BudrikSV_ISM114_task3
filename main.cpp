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
		cout << "�������� ������." << endl;
		cout << "1 - ����" << endl;
		cout << "2 - �������������" << endl;
		cout << "3 - ������������� �����������" << endl;
		cout << "������ ����� - �����." << endl;
		cin >> num;
		if (num == 1)
		{
			cout << "������� ������� �����: ";
			cin >> circleDiameter;
			ourCircle = Circle(circleDiameter);
			cout << "�������: " << ourCircle.GetArea() << endl;
			cout << "��������: " << ourCircle.GetPerimeter() << endl;
		}
		else if (num == 2)
		{
			cout << "������� ������ ��������������: ";
			cin >> rectangleWidth;
			cout << endl;
			cout << "������� ����� ��������������: ";
			cin >> rectangleHeight;
			ourRectangle = Rectangle(rectangleWidth, rectangleHeight);
			cout << "������: " << ourRectangle.GetFaces() << endl;
			cout << "������: " << ourRectangle.GetVertices() << endl;
			cout << "�������: " << ourRectangle.GetArea() << endl;
			cout << "��������: " << ourRectangle.GetPerimeter() << endl;
		}
		else if (num == 3)
		{
			cout << "������� ����� ������� ������: ";
			cin >> triangleWidth;
			cout << endl;
			cout << "������� ����� ������� ������: ";
			cin >> triangleHeight;
			ourTriangle = Triangle(triangleWidth, triangleHeight);
			cout << "������: " << ourTriangle.GetFaces() << endl;
			cout << "������: " << ourTriangle.GetVertices() << endl;
			cout << "�������: " << ourTriangle.GetArea() << endl;
			cout << "��������: " << ourTriangle.GetPerimeter() << endl;
		}
		else
			break;
	}
	
	system("pause");

	return 0;
}