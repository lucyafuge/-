#include "Point.h"
Point::Point()
{
	X = 0;
	Y = 0;
}
Point::Point(double x, double y)
{
	SetCoordinates(x, y);
}
void Point::SetCoordinates(double x, double y)
{
	X = x;
	Y = y;
}