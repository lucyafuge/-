#include "WhereIsPoint.h"
#include <iostream>
#pragma once

WhereIsPoint::WhereIsPoint(double x, double y, int variant)
{
	X = x;
	Y = y;
	switch (variant)
	{
	case FIRST:
		GetFirstisPointInArea();
		break;
	case SECOND:
		GetScondPointInArea();
		break;
	}
}
void WhereIsPoint::GetFirstisPointInArea()
{
	fromX = -1;
	fromY = -1;
	toX = -0.4;
	toY = 1;
	if (X > fromX && X < toX &&
		Y > fromY && Y < toY)
		isPointInArea = IN_AREA;
	else
		if (X < fromX || X > toX ||
			Y < fromY || Y > toY)
			isPointInArea = OUTSIDE_AREA;
		else
			isPointInArea = ON_BORDER;
}
void WhereIsPoint::GetScondPointInArea()
{
	fromX = 1;
	fromY = 1;
	toX = 0.5;
	toY = 0.5;
	double x = abs(X);
	double y = abs(Y);

	if (x < fromX && y < fromY && x + y > 1)
		isPointInArea = IN_AREA;
	else
		if ((x > fromX || y > fromY) ||
			(x + y < 1))
			isPointInArea = OUTSIDE_AREA;
		else
			isPointInArea = ON_BORDER;
}
void WhereIsPoint::GetAnswer()
{
	std::string answer = "";
	switch (isPointInArea)
	{
	case IN_AREA:
		answer = "Внутри заштрихованной области";
		break;
	case OUTSIDE_AREA:
		answer = "Вне заштрихованной области";
		break;
	case ON_BORDER:
		answer = "На границе этой области";
		break;
	default:
		break;
	}
	std::cout << "Точка с координатами:\n X: " << X << "\n Y: " << Y << std::endl << answer << std::endl;
}



