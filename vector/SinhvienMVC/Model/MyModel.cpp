#include "MyModel.h"


MyModel::MyModel()
{
	position.setPos(0, 0);
}


MyModel::~MyModel()
{

}

Point MyModel::yourPositionClicked()
{
	return position;
}

void MyModel::setPosClicked(Point pos)
{
	position = pos;
}

void MyModel::Display()
{
	std::cout << "Dang trong lop Model. Vi tri tu Controller chuyen xuong cho Model la:" << std::endl;
	position.Display();
}