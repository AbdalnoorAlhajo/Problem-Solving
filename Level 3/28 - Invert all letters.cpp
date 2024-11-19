// #28 - Invert all letters.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

char InvertLetterCase(char char1) {
    return isupper(char1) ? tolower(char1) : toupper(char1);
}

string InvertAllStringLettersCase(string S1)
{
    for (int i = 0; i < S1.length(); i++)
    {
        S1[i] = InvertLetterCase(S1[i]);
    }
    return S1;
}

int main() {
    string S1 = ReadString();

    cout << "\nChar after inverting case:\n";
    S1 = InvertAllStringLettersCase(S1);
    cout << S1 << endl;

    system("pause>0");
}
