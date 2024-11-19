// #8 - Digit Frequency.cpp
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

int main()
{
    int number = ReadPositiveNumber("Enter a positive number: ");
    int DigitToCheck = ReadPositiveNumber("Enter the number you wanna check: ");

    cout << DigitToCheck << " has " << CountDigitFrequency(DigitToCheck, number) << " time(s)\n";

    return 0;
}

