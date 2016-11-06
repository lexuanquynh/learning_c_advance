#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

//singleton design pattern

using namespace std;

class hieutruong
{
private:
	string ten;
	int tuoi;
private:
	static hieutruong* instance;
private:

	hieutruong(string _ten, int _tuoi)
	{
		ten = _ten;
		tuoi = _tuoi;
	}
public:
	static hieutruong* sharedInstance(string _ten, int _tuoi)
	{
		if (instance == NULL)
			instance = new hieutruong(_ten, _tuoi);
		return instance;
	}

	~hieutruong()
	{
		delete instance;
	}
	string getTen()
	{
		return ten;
	}
	
	int getTuoi()
	{
		return tuoi;
	}
};

hieutruong * hieutruong::instance = NULL;

struct sinhvien
{
	int masv;
	string hoten;
	int tuoi;
};

int main()
{
	vector<sinhvien> tinhoc;
	hieutruong *objhieutruong, *objhieutruong2;
	objhieutruong = hieutruong::sharedInstance("hieu truong Nam", 35);
	objhieutruong2 = hieutruong::sharedInstance("hieu truong Minh", 40);

	sinhvien temp;

	temp.hoten = "phuc";
	temp.masv = 123;
	temp.tuoi = 20;
	tinhoc.push_back(temp);

	temp.hoten = "hung";
	temp.masv = 234;
	temp.tuoi = 21;
	tinhoc.push_back(temp);

	for (vector<sinhvien>::iterator it = tinhoc.begin(); it != tinhoc.end(); it++)
	{
		cout << it->hoten << endl;
		cout << it->masv << endl;
		cout << it->tuoi << endl;
	}

	cout << "thong tin hieu truong " << objhieutruong <<"la: " << endl;
	cout << objhieutruong->getTen() << endl;
	cout << objhieutruong->getTuoi() << endl;

	cout << "thong tin hieu truong " << objhieutruong2 << "la: " << endl;
	cout << objhieutruong2->getTen() << endl;
	cout << objhieutruong2->getTuoi() << endl;

	getch();

	return 0;
}