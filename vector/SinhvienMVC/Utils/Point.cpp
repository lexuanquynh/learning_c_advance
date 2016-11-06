#include "Point.h"
#include <iostream>

Point::Point()
{
}

Point::Point(float _x, float _y)
{
	x = _x;
	y = _y;
}

Point::~Point()
{
}

void Point::Display()
{
	std::cout << "(" << x << ", " << y << ")" << std::endl;
}

void Point::setPos(float _x, float _y)
{
	x = _x;
	y = _y;
}