#include "view\view.h"
#include "controller\conroller.h"
#include "model\model.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	view objview;
	conroller objcontroler;
	model objmodel;
	char ten[30];

	cout << "Nhap 1 ten bat ky: "; cin.getline(ten, 30);

	name objname = objview.nhap(ten);
	objcontroler.setname(objname);
	name objnamed = objcontroler.getname();
	objmodel.setname(objnamed);

	getch();
}