#include "Dongvat.h"

Dongvat::Dongvat()
{
    mTenDongvat = "Noname";
	
    isoChan = 4;
    ibietChay = BIET_CHAY;
    igioitinh = CON_DUC ;


}

Dongvat::~Dongvat() 
{


}

Dongvat::Dongvat(const char*  tenDongvat, int soChan, int bietChay, int gioitinh)
{
    mTenDongvat = tenDongvat;
    isoChan = soChan;
    ibietChay = bietChay;
    igioitinh = gioitinh;
}

void Dongvat::Display()
{
	std::cout << mTenDongvat << std::endl;

	if (igioitinh == CON_DUC)
	{
		std::cout << "Con duc" << std::endl;
	}
	else if (igioitinh == CON_CAI)
	{
		std::cout << "Con cai" << std::endl;
	}
}

void Dongvat::setGioitinh(int gioitinh)
{
	igioitinh = gioitinh;
}

int Dongvat::getGioitinh()
{
	return igioitinh;
}