// #9 - Digits Frequency.cpp 
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

int CountDigitFrequency(short DigitToCheck, int Number)
{
    int FreqCount = 0, Remainder = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;

        if (DigitToCheck == Remainder)
        {
            FreqCount++;
        }
    }
    return FreqCount;
}

void PrintAllDigitFrequency(int number)
{
    for (int i = 0; i < 10; i++)
    {
        short DigitFrecuency = (CountDigitFrequency(i, number));

        if (DigitFrecuency > 0)
        {
            cout<<"Digit " << i << " frequency is " << DigitFrecuency << " time(s)\n";
        }   
    }
}

int main()
{
    int number = ReadPositiveNumber("Enter a positive number: ");

    PrintAllDigitFrequency(number);

    return 0;
}

