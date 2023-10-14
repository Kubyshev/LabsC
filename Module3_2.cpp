module;
#include <iostream>
#include <cmath>

module student_1bib21046.Lab2.Variant9.Task3;



double RBPO::lab2::variant9::task3::funf2(float x)
{
	std::cout << "vvod x";
	std::cin >> x;
	double f;
	if (x > 3.6)
		f = 45 * x * x + 5;
	else
		f = (5 * x) / (10 * x * x + 1);
	return f;
}