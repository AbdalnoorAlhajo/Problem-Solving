// #10 - Print Digits numbers in order.cpp
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

int ReverseNumber(int number)
{
    int digit, ReversedNumber = 0;

    while (number > 0)
    {
        digit = number % 10;
        number = number / 10;

        ReversedNumber = ReversedNumber * 10 + digit;

    }

    return ReversedNumber;
}

void PrintNumberInOrder(int number)
{
    number = ReverseNumber(number);
    cout << "\n\nNumber after reversing = " << number << endl;
    int digit;
    while (number > 0)
    {
        digit = number % 10;
        cout << digit << endl;
        number /= 10;
    }
}

int main()
{
    int number = ReadPositiveNumber("Please Enter a positive number: ");

    PrintNumberInOrder(number);
    return 0;
}

