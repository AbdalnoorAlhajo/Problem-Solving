// #2 - Print prime numbers form 1 to N.cpp
//

#include <iostream>
using namespace std;

enum enPrimeOrNot { Prime = 1, NotPrime = 2 };

int ReadPositiveNumber(string message)
{
    int number;

    do
    {
        cout << message << endl;
        cin >> number;

    } while (number <= 0);

    return number;
}

enPrimeOrNot CheckPrimeOrNot(int number)
{
    int i, M = round(number / 2);
    for (i = 2; i <= M; i++)
    {
        if (number % i == 0)
            return enPrimeOrNot::NotPrime;
    }
    return enPrimeOrNot::Prime;
}

void PrintPrimeNumbersFromOneToN(int number)
{
    for (int i = 1; i <= number; i++)
    {
        if (CheckPrimeOrNot(i) == enPrimeOrNot::Prime)
            cout << i << endl;
    }
}

int main()
{
    PrintPrimeNumbersFromOneToN(ReadPositiveNumber("Enter a positive number: "));
}
