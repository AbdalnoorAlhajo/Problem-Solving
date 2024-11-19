// #26 - Sum of Random Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int ReadPositiveNumber(string message)
{
    int number;

    do
    {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}

int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}

void FillArrayRandomNumbers(int arr[100], int& ArrLength)
{
    ArrLength = ReadPositiveNumber("How many element you wanna enter: ");
    for (int i = 0; i < ArrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }

}

void PrintArray(int arr[100], int ArrLength)
{
    cout << "\nArray Filled with random number: \n";
    for (int i = 0; i < ArrLength; i++)
    {
        cout << "Array [ " << i + 1 << " ] = " << arr[i] << "\n";
    }
    cout << endl;
}

int SumOfArray(int arr[100], int ArrLength)
{
    int Sum = 0;
    for (int i = 0; i < ArrLength; i++)
    {
        Sum = Sum + arr[i];
    }

    return Sum;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int ArrLength;

    FillArrayRandomNumbers(arr, ArrLength);
    PrintArray(arr, ArrLength);

    cout << "Sum Of Array = " << SumOfArray(arr, ArrLength) << endl;

    return 0;
}