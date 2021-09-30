#pragma once
#ifndef SHAPE_H
#define SHAPE_H
#endif

/// <summary>
/// ������� ����� ������ ��� ���� ��������
/// </summary>
class Shape 
{
public:
	// ������� ��������� �������� �����:
	void SetFaces(int _faces);
	void SetVertices(int _vertices);
	void SetWidth(double _width);
	void SetHeight(double _height);

	// ������� �������� �������� �����:
	int GetFaces();
	int GetVertices();
	double GetWidth();
	double GetHeight();
  
	// ������� ������� ��������� � �������
	virtual double GetArea();
	virtual double GetPerimeter();
private:
	/// <summary>
	/// ����� ������
	/// </summary>
	int faces;

	/// <summary>
	/// ����� ������
	/// </summary>
	int vertices;
	
	/// <summary>
	/// �����
	/// </summary>
	double width;

	/// <summary>
	/// ������
	/// </summary>
	double height;
};