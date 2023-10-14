export module student.1bib21046.Lab2.Variant9.Task1;

namespace RBPO 
{
	namespace lab2
	{
		namespace variant9
		{
			namespace task1
			{
				export double fun.f1(float x, float y)
				{
					std::cout << "vvod x,y";
					std::cin >> x, y;
					double f = ((cos(x) - cos(y)) ^ 2) - (sin(x) - sin(y) ^ 2);
					return f;

				}
				export double fun.f2(float x)
				{
					std::cout << "vvod x";
					std::cin >> x;
					double f;
					x > 3, 6 ? f = 45 * x * x + 5 : f = (5 * x) / (10 * x * x + 1)
						return f;
				}
				export double fun.a(int i)
				{
					double a = ((-1) ^ i) * (i + 1) / (2 ^ (i - 1));
					return a;

				}
				export double fun.f3()
				{
					std::cout << "vvod n";
					std::cin >> n;
					double sum=0;
					double a;
					for (int i = 0; i < n; i++)
					{
						a = fun.a(i);
						sum = sum + a;

					}
					return sum;
					

				}
				export double fun.f4()
				{
					float e;
					std::cout << "vvod e";
					std::cin >> e;
					a0 = fun.a(0);
					a1 = fun.a(1);
					sum = a0 + a1;
					

					for( int i = 2; abs(a0 - a1) > e; i++)
					{
						a0 = a1;
						a1 = fun.a(i);
						sum += a1;

					}
					return sum;

				}
			}
		}
	}
}

