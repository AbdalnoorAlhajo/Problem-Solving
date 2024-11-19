// #20 - Print Radom small, special, capital C.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;

enum enCharType {SmallChar = 1, Capital = 2, SpecialChar = 3, Digit = 4};

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

int main()
{
    srand((unsigned)time(NULL));

    cout << "\n Small char: " << GetRandomCharacter(enCharType::SmallChar) << endl;
    cout << "\n Capital char: " << GetRandomCharacter(enCharType::Capital) << endl;
    cout << "\n Special char: " << GetRandomCharacter(enCharType::SpecialChar) << endl;
    cout << "\n Digit: " << GetRandomCharacter(enCharType::Digit) << endl;
    return 0;
}

