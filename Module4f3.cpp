module;
#include <iostream>
#include <cmath>
export module student_1bib21046.Lab2.Variant9.Task4:f3;
import student_1bib21046.Lab2.Variant9.Task4:a;


namespace RBPO::lab2::variant9::task4
{
	double funf3(float x)
	{
		int n;
		std::cout << "vvod n";
		std::cin >> n;
		double sum = 0;
		double a;
		for (int i = 0; i < n; i++)
		{
			a = RBPO::lab2::variant9::task4::funa(i);
			sum = sum + a;

		}
		return sum;


	}
}