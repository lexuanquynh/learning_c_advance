#include "SampleView.h"
#include <iostream>

SampleView::SampleView()
{

}


SampleView::~SampleView()
{

}


Point SampleView::ButtonClick(float x, float y)
{
	std::cout << "Dang o lop view. Ban vua nhap vao man hinh tai vi tri: (" << x << ", " << y << ")" << std::endl;
	Point yourButtonPos(x, y);
	return yourButtonPos;
}