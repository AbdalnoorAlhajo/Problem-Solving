// # 37 - Read until -99.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

float ReadNumber(string message)
{
    float number;

    cout << message << endl;
    cin >> number;

    return number;
}

float SumNumber()
{
    int count = 1, sum = 0, number=0;

    do
    {
        number = ReadNumber("Enter a number, please " + to_string(count) + " (enter -99 to end)?");
        if (number == -99)
            break;

        sum += number;
        count++;
    } while (number);

    return sum;
}

int main()
{
    cout << "\n Result = " << SumNumber() << endl;

    return 0;
}

