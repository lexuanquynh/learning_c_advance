#pragma once
#include <iostream>
#include "..\Utils\Point.h"

class MyModel
{
private:
	Point position;
public:
	MyModel();
	~MyModel();
	Point yourPositionClicked();
	void setPosClicked(Point pos);
	void Display();
};

