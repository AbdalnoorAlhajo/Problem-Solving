// #28 - Sum odd numbers until N
//

#include <iostream>
using namespace std;

enum enOddOrEven { Odd = 1, Even = 2 };

int ReadNumber()
{
    int number;

    cout << "Enter a number, please: ";
    cin >> number;

    return number;
}

enOddOrEven CheckOddOrEven(int number)
{
    if (number % 2 == 0)
        return enOddOrEven::Even;
    else
        return enOddOrEven::Odd;
}

int SumOddNumbersFromNToOne(int N)
{
    int i = 0, sum = 0;

    do
    {
        i++;
        if (CheckOddOrEven(i) == enOddOrEven::Odd)
            sum = sum + i;
    } while (i < N);

    return sum;
}

void PrintResults(int sum)
{
    cout << "\n Result = " << sum << endl;
}

int main()
{
    int N = ReadNumber();
    PrintResults(SumOddNumbersFromNToOne(N));

    return 0;
}
