module;
#include <iostream>
#include <cmath>

module student_1bib21046.Lab2.Variant9.Task3;



double RBPO::lab2::variant9::task3::funf4()
{
	float e;
	std::cout << "vvod e";
	std::cin >> e;
	double a0 = funa(0);
	double a1 = funa(1);
	double sum = a0 + a1;
	int i = 2;

	do
	{
		a0 = a1;
		a1 = funa(i);
		sum += a1;
		i++;

	} while (abs(a0 - a1) > e);

	return sum;
}
