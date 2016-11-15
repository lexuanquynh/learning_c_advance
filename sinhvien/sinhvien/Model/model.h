#pragma once
#include <iostream>
#include "../tg/name.h"

class model
{
private:
	name tendanhap;
public:
	model();
	~model();
	void setname(name _ten);
	name getname();
};

