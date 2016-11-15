#include "conroller.h"
#include <iostream>

using namespace std;

conroller::conroller()
{

}


conroller::~conroller()
{

}

void conroller::setname(name _ten)
{
	tendanhap = _ten;
	cout << "ten ma view chuyen xuong la: ";
	tendanhap.hienthi();
}

name conroller::getname()
{
	return tendanhap;
}
