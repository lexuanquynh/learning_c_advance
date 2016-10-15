#include "GiaiptLibrary.h"
#include <iostream>
#include <math.h>

namespace MathLibrary
{
	int GiaiPhuongTrinh::PhuongtrinhBacHai(double a, double b, double c, int &x1, int &x2)
	{
		x1 = NAN;
		x2 = NAN;

		if (a == 0) {
			std::cout << "Phuong trinh nhap vao khong phai la phuong trinh bac 2!" << std::endl;
			return VO_NGHIEM;
		}

		double delta = 0;
		double d = (b * b - 4 * a * c);
		if (d < 0) {
			std::cout << "Phuong trinh vo nghiem!" << std::endl;
			return VO_NGHIEM;
		}

		delta = sqrt(d);

		if (delta > 0.0) {
			std::cout << "Phuong trinh co 2 nghiem!" << std::endl;
			x1 = (-b - delta) / (2 * a);
			x2 = (-b + delta) / (2 * a);
			return CO_NGHIEM;
		}
		else {
			std::cout << "Phuong trinh co nghiem duy nhat!" << std::endl;
			x1 = (-b - delta) / (2 * a);
			x2 = (-b - delta) / (2 * a);
			return CO_NGHIEM;
		}
	}

}
