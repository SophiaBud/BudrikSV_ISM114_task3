#pragma once
#ifndef SHAPE_H
#define SHAPE_H
#endif

/// <summary>
/// Базовый класс фигуры для всей иерархии
/// </summary>
class Shape 
{
public:
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
	virtual double GetArea();
	virtual double GetPerimeter();
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