#ifndef DONGVAT_H
#define DONGVAT_H
#include <iostream>
#include <string>

class Dongvat
{
public:
	enum gioitinh
	{
		CON_DUC,
		CON_CAI
	};
	enum bietChay
	{
		BIET_CHAY,
		KHONG_BIET_CHAY
	};
private:
	std::string mTenDongvat;
    int isoChan;
    int ibietChay;
    int igioitinh;

public:
	void setGioitinh(int gioitinh);
	int getGioitinh();
    Dongvat();
	void Display();
    Dongvat(const char*  tenDongvat, int soChan, int bietChay, int gioitinh);
    ~Dongvat();
};

#endif // DONGVAT_H
