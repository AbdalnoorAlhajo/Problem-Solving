// #21 - Generate Keys.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;

    return RandNum;
}

int ReadPositiveNumber(string message)
{
    int number;
    do
    {
        cout << message;
        cin >> number;
    } while (number >= 0);
    return number;
}

string GenerateWord(short Length)
{
    string Word = "";
    for (int i = 1; i <= Length; i++)
    {
        Word = Word + char(RandomNumber(65, 90));
    }

    return Word;
}

string GenerateKey()
{
    string Key;

    Key = GenerateWord (4) + "-";
    Key += GenerateWord(4) + "-";
    Key += GenerateWord(4) + "-";
    Key += GenerateWord(4);

    return Key;
}

void GenerateKeys(short NumberOfKeys)
{
    for (int i = 1; i <= NumberOfKeys; i++)
    {
        cout << "Key [ " << i + 1 << " ] = ";
        cout << GenerateKey() << endl;
    }
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    GenerateKeys(5);
}

