#include "View\SampleView.h"
#include "Controller\MyController.h"
#include "Model\MyModel.h"
#include <conio.h>

int main()
{
	SampleView objView;
	MyController objController;
	MyModel objMyModel;

	//Nguoi dung click vao man hinh
	Point yourPosClicked = objView.ButtonClick(12, 15);

	//Controller se nhan vi tri click nay de chuyen xuong cho Model
	objController.setPostion(yourPosClicked);

	//Model se nhan vi tri tu lop Controller chuyen xuong va save lai
	//step 1: Lay cai vi tri tu Controller chuyen xuong
	Point posController = objController.getPosition();

	//step 2: set vi tri do vao Model
	objMyModel.setPosClicked(posController);
	//Hien thi xem ket qua Model nhan duoc dung chua
	objMyModel.Display();
	getch();
	return 0;
}