// #29 - Copy Prime Numbers only.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    cout << "\n\n";
    for (int i = 0; i < ArrLength; i++)
    {
        cout << "Array [ " << i + 1 << " ] = " << arr[i] << "\n";
    }
    cout << endl;
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

void CopyPrimeNumbers(int arr1[100], int arr2[100], int ArrLength, int& Arr2Length)
{
    int count = 0;
    for (int i = 0; i < ArrLength; i++)
    {
        if (CheckPrime(arr1[i]))
        {
            arr2[count] = arr1[i];
            count++;
        }
    }
    Arr2Length = --count;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arr2[100];
    int ArrLength = 0, Arr2Length = 0;

    FillArrayRandomNumbers(arr, ArrLength);
    cout << "\n Array 1: \n";
    PrintArray(arr, ArrLength);

    CopyPrimeNumbers(arr, arr2, ArrLength, Arr2Length);
    cout << "\n Array 2: \n";
    PrintArray(arr2, Arr2Length);


    return 0;
}