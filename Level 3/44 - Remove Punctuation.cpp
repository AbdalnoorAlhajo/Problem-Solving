// #44 - Remove Punctuation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string RemovePunctuationsFromString(string S1) 
{
    string S2 = "";

    for (short i = 0; i < S1.length(); i++) 
    {
        if (!ispunct(S1[i])) 
        {
            S2 += S1[i];
        }
    }
    return S2;
}

int main() {
    string S1 = "Welcome to Jordan, Jordan is a nice country; it's amazing.";

    cout << "Original String:\n" << S1;
    cout << "\n\nPunctuations Removed:\n" << RemovePunctuationsFromString(S1);

    system("pause>0");
    return 0;
}
