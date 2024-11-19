// #7 - Half of Number.
//

#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    return number;
}

float CalculateHalfNumber(int number)
{
    return (float)number / 2;
}

void PrintResults(int number)
{
    string Result = "Half of " + to_string(number) + " is " + to_string(CalculateHalfNumber(number));
    cout << endl << Result << endl;

}

int main()
{
    PrintResults(ReadNumber());

    return 0;
}

