#include <iostream>
#include <ostream>
#include <string>

using namespace std;

void WritePersonData(const string& name, const unsigned short* age,
    const string& height = "", const string& weight = "")
{
    cout << "\n��� :  " << name
        << "\n�������:  " << *age
        << "\n����: " << height
        << "\n���: " << weight
        << "\n���. �����  " << sale << "���.";
}