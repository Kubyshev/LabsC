module;

#include <cmath>
#include <iostream>

module student_1bib21046.Lab2.Variant9.Task2;





				double RBPO::lab2::variant9::task2::funf1(float x, float y)
				{
					std::cout << "vvod x,y";
					std::cin >> x, y;
					double f = ((cos(x) - cos(y)) * (cos(x) - cos(y))) - ((sin(x) - sin(y)) * (sin(x) - sin(y)));
					return f;

				}
				double RBPO::lab2::variant9::task2::funf2(float x)
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
				double funa(int i)
				{
					double a = (pow(-1, i) * (i + 1) / (pow(2, i - 1)));
					return a;

				}
				double RBPO::lab2::variant9::task2::funf3()
				{
					int n;
					std::cout << "vvod n";
					std::cin >> n;
					double sum = 0;
					double a;
					int i = 0;
					while (i < n)
					{
						a = funa(i);
						sum = sum + a;
						i++;

					}
					return sum;


				}
				double RBPO::lab2::variant9::task2::funf4()
				{
					float e;
					std::cout << "vvod e";
					std::cin >> e;
					double a0 = funa(0);
					double a1 = funa(1);
					double sum = a0 + a1;
					int i = 2;

					while (abs(a0 - a1) > e)
					{
						a0 = a1;
						a1 = funa(i);
						sum += a1;
						i++;

					}
					return sum;

				}
			

