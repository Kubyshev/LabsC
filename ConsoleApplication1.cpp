import student_1bib21046.Lab2.Variant9.Task1;
import student_1bib21046.Lab2.Variant9.Task2;
import student_1bib21046.Lab2.Variant9.Task3;
import student_1bib21046.Lab2.Variant9.Task4;
import student_1bib21046.Lab2.Variant9.Task5;

#include <iostream>
#include <cmath>

int main()
{
    int x;
    std::cout << "vvod x(1-5)";
    std::cin >> x;
    switch (x)
    {
    case '1':

        printf("Task 1");

        RBPO::lab2::variant9::task1::funf1();
        RBPO::lab2::variant9::task1::funf2();
        RBPO::lab2::variant9::task1::funf3();
        RBPO::lab2::variant9::task1::funf4();
        break;
    case '2':
        printf("Task2 2");
        RBPO::lab2::variant9::task2::funf1(x,y);
        RBPO::lab2::variant9::task2::funf2(x);
        RBPO::lab2::variant9::task2::funf3();
        RBPO::lab2::variant9::task2::funf4();
        break;
    case '3':
        printf("Task3 3");
        RBPO::lab2::variant9::task3::funf1(x,y);
        RBPO::lab2::variant9::task3::funf2(x);
        RBPO::lab2::variant9::task3::funf3();
        RBPO::lab2::variant9::task3::funf4();
        break;
    case '4':
        printf("Task4 4");
        RBPO::lab2::variant9::task4::funf1(x,y);
        RBPO::lab2::variant9::task4::funf2(x);
        RBPO::lab2::variant9::task4::funf3();
        RBPO::lab2::variant9::task4::funf4();
        break;
    case '5':
        printf("Task5 5");
        RBPO::lab2::variant9::task5::funf1(x,,y);
        RBPO::lab2::variant9::task5::funf2(x);
        RBPO::lab2::variant9::task5::funf3();
        RBPO::lab2::variant9::task5::funf4();
        break;
    default:
        printf("incorrect input");
        break;
    }


    
}

