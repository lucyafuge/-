#pragma once
#include <iostream>
enum WHERE_IS_POINT
{
	IN_AREA,
	OUTSIDE_AREA,
	ON_BORDER
};
enum VARIANT
{
	FIRST,
	SECOND
};
class WhereIsPoint
{
private:
	int isPointInArea;
	double fromX, toX;
	double fromY, toY;
	void GetFirstisPointInArea();
	void GetScondPointInArea();
public:
	double X, Y;
	WhereIsPoint(double x, double y, int variant);
	void GetAnswer();
};


