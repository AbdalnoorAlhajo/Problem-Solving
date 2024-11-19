// #45 - Count negitive numbers in array.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    ArrLength = ReadPositiveNumber("Enter the numbers of element: ");
    for (int i = 0; i < ArrLength; i++)
    {
        arr[i] = RandomNumber(-100, 100);
    }

}

int CountNegitiveNumbersInArray(int arr[100], int arrLength)
{
    int count = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] < 0)
            count++;
    }
    return count;
}

void PrintArray(int arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
        cout << arr[i] << " ";
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int ArrLength = 0;

    FillArrayRandomNumbers(arr, ArrLength);

    cout << "\nArray: ";
    PrintArray(arr, ArrLength);

    int count = CountNegitiveNumbersInArray(arr, ArrLength);

    cout << "\n\n Negitive numbers = " << count << endl;

    return 0;
}