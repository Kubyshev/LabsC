module;
#include <iostream>
#include <cmath>

module student_1bib21046.Lab2.Variant9.Task3;


//#include <c.math>

double RBPO::lab2::variant9::task3::funf1(float x, float y)
{
	std::cout << "vvod x,y";
	std::cin >> x, y;
	double f = ((cos(x) - cos(y)) * (cos(x) - cos(y))) - ((sin(x) - sin(y)) * (sin(x) - sin(y)));
	return f;

}