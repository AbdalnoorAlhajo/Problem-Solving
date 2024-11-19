// #11 - Palindrome Number.cpp
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

int HowManyDigits(int number)
{
    int digit, count= 0;
    while (number > 0)
    {
        digit = number % 10;
        number /= 10;
        count++;
    }
    return count;
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

int Digit(int position, int number)
{
    int reverse_number = ReverseNumber(number);

    int digit;
    while (position > 0)
    {
        digit = reverse_number % 10;
        reverse_number /= 10;
        position--;
    }
    return digit;
}

bool CheckPalindromeNumber(int number)
{
    int j = HowManyDigits(number);
    int i = 1;

    while (j > 0)
    {
        if (Digit(i, number) != Digit(j, number))
            return false;
        j--;
        i++;
    }
    return true;
}

void PrintResult(int number)
{
    if (CheckPalindromeNumber(number) == true)
        cout << "It's a Palindrome number" << endl;
    else
        cout << "It is not a Palindrome number" << endl;
}

int main()
{
    PrintResult(ReadPositiveNumber("Enter a positive number: "));

    return 0;
}
