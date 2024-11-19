// #33 - Fill Array With Keys.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;

enum enCharType { SmallChar = 1, Capital = 2, SpecialChar = 3, Digit = 4 };

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case SmallChar:
        return char(RandomNumber(97, 122));
        break;
    case Capital:
        return char(RandomNumber(65, 90));
        break;
    case SpecialChar:
        return char(RandomNumber(33, 47));
        break;
    case Digit:
        return char(RandomNumber(48, 57));
        break;
    default:
        break;
    }
}

string GenerateWord(enCharType CharType, short Length)
{
    string Word;
    for (int i = 1; i <= Length; i++)
    {
        Word = Word + GetRandomCharacter(CharType);
    }

    return Word;
}

string GenerateKey()
{
    string Key;

    Key = GenerateWord(enCharType::Capital, 4) + "-";
    Key += GenerateWord(enCharType::Capital, 4) + "-";
    Key += GenerateWord(enCharType::Capital, 4) + "-";
    Key += GenerateWord(enCharType::Capital, 4);

    return Key;
}

void FillArrayWithKeys(string arr[100], int& ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        arr[i] = GenerateKey();
    }
}

void PrintStringArray(string arr[100], int ArrLength)
{
    cout << "\nArray Filled with random keys: \n";
    for (int i = 0; i < ArrLength; i++)
    {
        cout << "Array [ " << i << " ] = " << arr[i] << "\n";
    }
    cout << endl;
}

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

int main()
{
    srand((unsigned)time(NULL));

    int ArrLength = 0;

    ArrLength = ReadPositiveNumber("Enter Array Length: ");

    string arr[100];

    FillArrayWithKeys(arr, ArrLength);

    PrintStringArray(arr, ArrLength);

    return 0;
}