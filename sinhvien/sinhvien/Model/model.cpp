#include "model.h"
#include <iostream>

using namespace std;

model::model()
{
	
}


model::~model()
{

}

void model::setname(name _ten)
{
	tendanhap = _ten;
	cout << "ten ma controller chuyen xuong cho model la:  ";
	tendanhap.hienthi();
}

name model::getname()
{
	return tendanhap;
}
