// #41 - Convert Hours to weeks and days.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float ReadPoitiveNumber(string message)
{
    float number;

    do
    {
        cout << message << endl;
        cin >> number;

    } while (number <= 0);

    return number;
}

float HoursToDays(float Hours)
{
    return Hours / 24;
}

float HoursToWeeks(float Hours)
{
    return Hours / 24 / 7;
}

int main()
{
    float Hours = ReadPoitiveNumber("Enter Number of Hours: ");
    float Days = HoursToDays(Hours);
    float Weeks = HoursToWeeks(Hours);

    cout << "\n Hours = " << Hours;
    cout << "\n Days = " << Days;
    cout << "\n Weeks = " << Weeks;


    return 0;
}

