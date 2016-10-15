#pragma once
#ifdef MATHLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport) 
#else
#define MATHLIBRARY_API __declspec(dllimport) 
#endif

namespace MathLibrary
{
	enum {
		VO_NGHIEM = 0,
		CO_NGHIEM = 1
	};
	// This class is exported from the MathLibrary.dll
	class GiaiPhuongTrinh
	{
	public:
		// Ham giai phuong trinh bac 2:
		//Nhap 3 so thuc a, b, c
		//Nghiem tra ve la x1 va x2
		//Ham tra ve 0 neu vo nghiem, tra ve 1 neu co nghiem
		static MATHLIBRARY_API int PhuongtrinhBacHai(double a, double b, double c, int &x1, int &x2);
	};
}