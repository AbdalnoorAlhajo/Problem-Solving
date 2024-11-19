// #31-Count both upper, lower cases.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string ReadString() {
    string S1;
    cout << "Please Enter a String?\n";
    getline(cin, S1);
    return S1;
}

char ReadChar()
{
    char Letter;

    cout << "\nPlease, Enter a character: ";
    cin >> Letter;

    return Letter;
}

short CountLetterInString(string S1, char LetterToCount)
{
    short Count = 0;
    for (int i = 0; i < S1.length(); i++)
    {
        if (S1[i] == LetterToCount)
            Count++;
    }
    return Count;
}

short CountLetterWithUpperLowerCases(string S1, char LetterToCount)
{
    short Count = 0;
    LetterToCount = toupper(LetterToCount);

    for (int i = 0; i < S1.length(); i++)
    {
        if (toupper(S1[i]) == LetterToCount)
            Count++;
    }
    return Count;
}

char InvertLetterCase(char char1) {
    return isupper(char1) ? tolower(char1) : toupper(char1);
}

int main() {
    string S1 = ReadString();
    char LetterToCount = ReadChar();

    cout << "\nLetter\'" << LetterToCount << "\' Count = " << CountLetterInString(S1, LetterToCount);

    cout << "\nLetter\'" << LetterToCount;
    cout << "\' or \'" << InvertLetterCase(LetterToCount) << "\' Count = ";
    cout << CountLetterWithUpperLowerCases(S1, LetterToCount);

    system("pause>0");
}
