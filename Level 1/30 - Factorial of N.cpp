// # 30 - Factorial of N.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int ReadPositiveNumber(string massage)
{
    int number;

    do {
        cout << massage << endl;
        cin >> number;
    } while (number < 0);
   

    return number;
}

int Factorial(int number)
{
    int i = 0, sum = 1;

    for (i = 1; i <= number; i++)
    {
        sum = sum * i;
    }
    
    return sum;
}


int main()
{
    cout << "Factorial = " << Factorial(ReadPositiveNumber("Enter a poitive number: "));

    return 0;
}

