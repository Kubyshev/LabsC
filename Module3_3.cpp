module;
#include <iostream>
#include <cmath>

module student_1bib21046.Lab2.Variant9.Task3;



double RBPO::lab2::variant9::task3::funf3()
{
	int n;
	std::cout << "vvod n";
	std::cin >> n;
	double sum = 0;
	double a;
	int i = 0;
	do
	{
		a = funa(i);
		sum = sum + a;
		i++;

	} while (i < n + 1);
	return sum;


}

