// #25 - Read until age Between.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadAge()
{
    int age;

    cout << "How old are you? \n ";
    cin >> age;

    return age;
}

bool ValidateNumberInRange(int number, int From, int To)
{
    return (number >= From && number <= To);
}

int ReadUntilAgeBetween(int From, int To)
{
    int age;

    do
    {
        age = ReadAge();
    } while (!ValidateNumberInRange(age, From, To));

    return age;
}

void PrintResults(int age) {
    cout << "your are " << age << " years old" << endl;
}

int main()
{
    PrintResults(ReadUntilAgeBetween(18, 45));


    return 0;
}
