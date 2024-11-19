// #33 - Count Vowel.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
    string S1;
    cout << "Please Enter a string: ";
    getline(cin, S1);
    return S1;
}

bool IsVowel(char Ch1)
{
    Ch1 = tolower(Ch1);

    return ((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i') || (Ch1 == 'o') || (Ch1 == 'u'));
}

short CountVowels(string S1)
{
    short Count = 0;
    for (int i = 0; i < S1.length(); i++)
    {
        if (IsVowel(S1[i]))
            Count++;
    }
    return Count;
}

int main() {
    string S1 = ReadString();

    cout << "\nVowel Letters = " << CountVowels(S1);

    system("pause>0");
}
