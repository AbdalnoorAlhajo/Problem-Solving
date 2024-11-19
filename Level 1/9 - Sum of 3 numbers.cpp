// #9 - Sum of 3 numbers.
//

#include <iostream>
using namespace std;

void ReadNumbers(int& num1, int& num2, int& num3)
{
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;
}

int Sum3numbers(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

void PrintNumbers(int total)
{
    cout << "The total = " << total << endl;
}

int main()
{
    int num1, num2, num3;

    ReadNumbers(num1, num2, num3);
    PrintNumbers(Sum3numbers(num1, num2, num3));


    return 0;
}
