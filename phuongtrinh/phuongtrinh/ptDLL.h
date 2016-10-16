#pragma once
#ifdef pt_EXPORTS
#define pt_API __declspec(dllexport) 
#else
#define pt_API __declspec(dllimport) 
#endif

namespace pt
{
	class giaipt
	{
	public:
		static pt_API void ptbac1(double a, double b);
		static pt_API void ptbac2(double a, double b, double c);
	};
}