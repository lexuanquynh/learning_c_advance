#include "name.h"
#include <iostream>

using namespace std;


name::name()
{

}

name::name(char _ten[])
{
	strcpy_s(ten, _ten);
}

void name::nhapten(char _ten[])
{
	strcpy_s(ten, _ten);
}

void name::hienthi()
{
	cout << ten << endl;
}

name::~name()
{

}
