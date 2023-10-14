module;
#include <iostream>
#include <cmath>
export module student_1bib21046.Lab2.Variant9.Task4:f2;


namespace RBPO::lab2::variant9::task4
{

double funf2(float x)
{
	std::cout << "vvod x";
	std::cin >> x;
	double f;
	x > 3.6 ? f = 45 * x * x + 5 : f = (5 * x) / (10 * x * x + 1);
	return f;
}}