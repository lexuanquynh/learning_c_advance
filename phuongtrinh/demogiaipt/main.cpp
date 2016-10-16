#include <ptDLL.h>
#include <iostream>

using namespace pt;
using namespace std;

int main()
{
	double a, b, c;
	cout << "Giai phuong trinh bac nhat" << endl;
	cout << "nhap a: "; cin >> a;
	cout << "nhap b: "; cin >> b;
	giaipt::ptbac1(a, b);
	cout << "Giai phuong trinh bac hai" << endl;
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
	cout << "Nhap c: "; cin >> c;
}