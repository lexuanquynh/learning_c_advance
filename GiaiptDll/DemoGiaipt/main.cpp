#include <GiaiptLibrary.h>
#include <iostream>

using MathLibrary::GiaiPhuongTrinh;

int main(int argc, char* argv[]) {

	int x1, x2;

	int ketqua = GiaiPhuongTrinh::PhuongtrinhBacHai(1, 2, 1, x1, x2);

	if (ketqua == MathLibrary::CO_NGHIEM) {
		std::cout << "x1 = " << x1 << std::endl;
		std::cout << "x2 = " << x2 << std::endl;
	}

	return 0;
}