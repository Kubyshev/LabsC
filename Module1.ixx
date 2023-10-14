module;

#include <iostream>
#include <cmath>
export module student_1bib21046.Lab2.Variant9.Task1;

namespace RBPO
{
	namespace lab2
	{
		namespace variant9
		{
			namespace task1
			{
				export double funf1()
				{
					std::cout << "vvod x,y";
					int x, y;
					std::cin >> x >> y;
					double f = ((cos(x) - cos(y))*(cos(x) - cos(y))) - ((sin(x) - sin(y))*(sin(x) - sin(y)));
					
					std::cout << "fun1="<<f;
					return f;
				}
				export double funf2()
				{
					float x;
					std::cout << "vvod x";
					std::cin >> x;
					double f;
					x > 3.6 ? f = 45 * x * x + 5 : f = (5 * x) / (10 * x * x + 1);
					return f;
					std::cout << "fun2=" << f;

				}
				double funa(int i)
				{
					double a = (pow(-1, i) * (i + 1) / (pow(2, i - 1)));
					return a;
					std::cout << "funA=" << a;

				}
				export double funf3()
					{	
						int n;
						std::cout << "vvod n";
						std::cin >> n;
						double sum = 0;
						double a;
						for (int i = 0; i < n; i++)
						{
							a = funa(i);
							sum = sum + a;

						}
						return sum;
						std::cout << "fun3=" << sum;


				}
				export double funf4()
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
						std::cout << "fun4=" << sum;

					}
			}
		}
	}
}

