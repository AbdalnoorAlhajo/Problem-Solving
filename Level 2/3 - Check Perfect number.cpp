// #3 - Check Perfect number.cpp
//

#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{
    int number;

    do
    {
        cout << message;
        cin >> number;

    } while (number <= 0);

    cout << "Number = " << number << endl;

    return number;
}

bool IsPerfectNumber(int number)
{
    int sum = 0, i;
    for (i = 1; i <= round(number / 2); i++)
    {
        if (number % i == 0)
            sum += i;
    }
    cout << "\n The sum of number that divisionable by " << number << " = " << sum << "\n\n";

    return (sum == number);
}

void PrintResults(int number)
{
    if (IsPerfectNumber(number) == true)
        cout << number << " is a perfect number\n";
    else
        cout << number << " is not a perfect number\n";
}

int main()
{
    int number = ReadPositiveNumber("Enter a positive number: ");

    PrintResults(number);

    return 0;
}

