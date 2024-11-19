// #39 - Copy Prime Numbers to new array.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void AddArrayElement(int number, int arrDestination[100], int& ArrLength)
{
    ArrLength++;
    arrDestination[ArrLength - 1] = number;
}

void FillArrayRandomNumbers(int arr[100], int& ArrLength)
{
    ArrLength = ReadPositiveNumber("How many element you wanna enter: ");
    for (int i = 0; i < ArrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }

}

bool CheckPrime(int number)
{
    for (int i = 2; i <= round(number / 2); i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

void CopyPrimeNumbers(int arrSource[100], int arrDestination[100], int ArrLength, int& ArrDestinationLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        if (CheckPrime(arrSource[i]))
        {
            AddArrayElement(arrSource[i], arrDestination, ArrDestinationLength);
        }
    }

}

void PrintArray(int arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[100], arr2[100];
    int ArrLength = 0, Arr2Length = 0;

    FillArrayRandomNumbers(arr, ArrLength);

    cout << "\nArray: ";
    PrintArray(arr, ArrLength);

    cout << "\n\nCopy prime numbers  using AddArrayElement: ";
    CopyPrimeNumbers(arr, arr2, ArrLength, Arr2Length);

    PrintArray(arr2, Arr2Length);
    cout << endl;
              
    return 0;
}