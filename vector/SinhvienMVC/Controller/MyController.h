#pragma once
#include "..\View\SampleView.h"
#include "..\Model\MyModel.h"
#include "..\Utils\Point.h"

class MyController
{
private:
	Point yourPos;
public:
	MyController();
	~MyController();
	void setPostion(Point pos);
	Point getPosition();
};

