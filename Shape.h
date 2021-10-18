#pragma once

/// <summary>
/// Базовый класс фигуры для всей иерархии
/// </summary>
class Shape 
{
public:
	virtual ~Shape() = 0;

	// функции изменения значений полей:
	void SetFaces(int _faces);
	void SetVertices(int _vertices);
	void SetWidth(double _width);
	void SetHeight(double _height);

	// функции возврата значений полей:
	int GetFaces();
	int GetVertices();
	double GetWidth();
	double GetHeight();
  
	// функции расчета периметра и площади
	virtual double GetArea() = 0;
	virtual double GetPerimeter() = 0;
private:
	/// <summary>
	/// Число сторон
	/// </summary>
	int faces;

	/// <summary>
	/// Число вершин
	/// </summary>
	int vertices;
	
	/// <summary>
	/// Длина
	/// </summary>
	double width;

	/// <summary>
	/// Ширина
	/// </summary>
	double height;
};