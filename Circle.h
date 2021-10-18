#pragma once
#include "Shape.h"

/// <summary>
/// Ęëŕńń äë˙ ęđóăŕ
/// </summary>
class Circle : public Shape 
{

private:
	unsigned side = 0;
public:
	Circle();
	Circle(double _diameter); // äčŕěĺňđ ęđóăŕ (ňŕęćĺ ĺăî řčđčíŕ č âűńîňŕ) = ďîëîâčíĺ đŕäčóńŕ
	double GetArea();
	double GetPerimeter();
};
