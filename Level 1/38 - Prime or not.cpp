// #38 - Prime or not.cpp
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
    int i , M = round(number / 2);
    for (i = 2; i <= M; i++)
    {
        if (number % i == 0)
            return enPrimeOrNot::NotPrime;
    }
    return enPrimeOrNot::Prime;
}

void PrintNumberType(int number)
{
    switch (CheckPrimeOrNot(number))
    {
    case enPrimeOrNot::Prime:
        cout << "The number is prime" << endl;
        break;
    case enPrimeOrNot::NotPrime:
        cout << "The number is not prime" << endl;
        break;
    }
}

int main()
{
    PrintNumberType(ReadPositiveNumber("Enter a positive number: "));
}

