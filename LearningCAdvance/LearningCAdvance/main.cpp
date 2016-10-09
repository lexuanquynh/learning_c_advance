#include <iostream>
#include "Dongvat.h"
#include <conio.h>

int main() {
	Dongvat *objDongVat;
	objDongVat = new Dongvat();

	objDongVat->Display();

	objDongVat->setGioitinh(Dongvat::CON_CAI);
	objDongVat->Display();

	delete objDongVat;
	
	getch();
	return 0;
}