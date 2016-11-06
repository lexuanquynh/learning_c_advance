#include "MyController.h"


MyController::MyController()
{
	yourPos.setPos(0, 0);
}


MyController::~MyController()
{
}

void MyController::setPostion(Point pos)
{
	//Toi nhan duoc tu View vi tri
	yourPos = pos;
	//hien thi ra
	std::cout << "Dang trong lop Controller. Vi tri tu View chuyen xuong cho Controller la:" << std::endl;
	yourPos.Display();
}

Point MyController::getPosition()
{
	return yourPos;
}
