module;
#include <iostream>
#include <cmath>
export module student_1bib21046.Lab2.Variant9.Task4:f1;


namespace RBPO::lab2::variant9::task4 
{


	double funf1(float x, float y)
{
	std::cout << "vvod x,y";
	std::cin >> x, y;
	double f = ((cos(x) - cos(y)) * (cos(x) - cos(y))) - ((sin(x) - sin(y)) * (sin(x) - sin(y)));
	return f;

}
}