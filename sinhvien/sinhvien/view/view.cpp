#include "view.h"
#include <iostream>


view::view()
{

}

view::~view()
{

}

name view::nhap(char _ten[])
{
	std::cout << "Ban da nhap: " << _ten << std::endl;
	name tendanhap(_ten);
	return tendanhap;
}
