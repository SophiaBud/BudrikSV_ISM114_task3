#pragma once

/// <summary>
/// ������� ����� ������ ��� ���� ��������
/// </summary>
class Shape 
{
public:
	virtual ~Shape() = 0;

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
	virtual double GetArea() = 0;
	virtual double GetPerimeter() = 0;
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