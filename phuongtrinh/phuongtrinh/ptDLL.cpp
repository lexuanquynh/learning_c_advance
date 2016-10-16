#include "ptDLL.h"
#include <iostream>
#include <cmath>

namespace pt
{
	void giaipt::ptbac1(double a, double b)
	{
		double x;
		if (a == 0)
		{
			std::cout << "phuong trinh co vo so nghiem" << std::endl;
			return;
		}
		x = (-b) / a;
		std::cout << "nghiem phuong trinh: " << x << std::endl;
	}
	void giaipt::ptbac2(double a, double b, double c)
	{
		double x1, x2;
		if (a == 0)
		{
			std::cout << "phuong trinh nay khong phai phuong trinh bac 2" << std::endl;
			return;
		}
		double d = (b * b + 4 * a * c);
		x1 = ((-b) + sqrt(d)) / (2 * a);
		x2 = ((-b) - sqrt(d)) / (2 * a);
		std::cout << "Phuong trinh co 2 nghiem phan  biet" << std::endl;
		std::cout << "nghiem 1: " << x1 << std::endl;
		std::cout << "nghiem 2: " << x2 << std::endl;
	}
}
