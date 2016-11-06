#pragma once
class Point
{
private:
	float x, y;
public:
	Point();
	Point(float _x, float _y);
	~Point();
	void Display();
	void setPos(float _x, float _y);
};
