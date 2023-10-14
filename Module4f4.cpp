module;
#include <iostream>
#include <cmath>
export module student_1bib21046.Lab2.Variant9.Task4:f4;
import student_1bib21046.Lab2.Variant9.Task4:a;


namespace RBPO::lab2::variant9::task4
{
double funf4()
{
	float e;
	std::cout << "vvod e";
	std::cin >> e;
	double a0 = funa(0);
	double a1 = funa(1);
	double sum = a0 + a1;


	for (int i = 2; abs(a0 - a1) > e; i++)
	{
		a0 = a1;
		a1 = funa(i);
		sum += a1;

	}
	return sum;

}
}