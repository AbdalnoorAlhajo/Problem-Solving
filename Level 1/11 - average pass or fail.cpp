// #11 - average pass or fail.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

void ReadNumbers(int& mark1, int& mark2, int& mark3)
{
    cout << "Enter first mark: ";
    cin >> mark1;

    cout << "Enter second mark: ";
    cin >> mark2;

    cout << "Enter third mark: ";
    cin >> mark3;
}

int SumOf3marks(int mark1, int mark2, int mark3)
{
    return mark1 + mark2 + mark3;
}

float CalculateAverage(int mark1, int mark2, int mark3)
{
    return (float)SumOf3marks(mark1, mark2, mark3) / 3;
}

enPassFail CheckAverage(int mark)
{
    if (mark >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintNumbers(float Average)
{
    cout << "Average = " << Average << endl;

    if (CheckAverage(Average) == enPassFail::Pass)
    {
        cout << "\n  you passed  \n";
    }
    else {
        cout << "\n  you failed  \n";
    }
}

int main()
{
    int mark1, mark2, mark3;

    ReadNumbers(mark1, mark2, mark3);
    PrintNumbers(CalculateAverage(mark1, mark2, mark3));


    return 0;
}
