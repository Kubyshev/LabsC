#include <iostream>
#include <ostream>
#include <string>

using namespace std;

void WritePersonData(const string& name, const unsigned short* age,
    const string& height = "", const string& weight = "")
{
    cout << "\nИмя :  " << name
        << "\nВозраст:  " << *age
        << "\nРост: " << height
        << "\nВес: " << weight
        << "\nЗар. плата  " << sale << "руб.";
}