// #31 - Shuffle Ordered Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void Swap(int& A, int& B)
{
    int Temp;

    Temp = A;
    A = B;
    B = Temp;
}

int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}

void ShuffleArray(int arr[100], int& ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        Swap(arr[RandomNumber(1, ArrLength) - 1], arr[RandomNumber(1, ArrLength) - 1]);
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

void FillArrayInOrder(int arr[100], int ArrLength)
{
    for (int i = 0; i < 100; i++)
    {
        arr[i] = i + 1;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int ArrLength;

    ArrLength = ReadPositiveNumber("How many element you wanna enter: ");

    FillArrayInOrder(arr, ArrLength);
    cout << "\n Array 1: \n";
    PrintArray(arr, ArrLength);

    ShuffleArray(arr, ArrLength);
    cout << "\n Array 1 After shuffle: \n";
    PrintArray(arr, ArrLength);


    return 0;
}