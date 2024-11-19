// #27 - Invert character.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

char ReadChar()
{
    char word;

    cout << "Please Enter a word: ";
    cin >> word;

    return word;
}

char InvertChar(char Character)
{
    if (int(Character) >= 65 && int(Character) <= 90)
    {
        Character = char(int(Character) + 32);
    }
    else if (int(Character) >= 97 && int(Character) <= 122)
    {
        Character = char(int(Character) - 32);
    }
    return Character;
}


int main()
{
    char word = ReadChar();

    cout << "\nCharacter before convertion: \n";
    cout << word << endl;

    cout << "\nCharacter after convertion: \n";
    cout << InvertChar(word) << endl;

    return 0;
}

