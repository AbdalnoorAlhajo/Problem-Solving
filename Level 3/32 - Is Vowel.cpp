// #32 - Is Vowel.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


char ReadChar() {
    char Ch1;
    cout << "Please Enter a Character?\n";
    cin >> Ch1;
    return Ch1;
}


char InvertLetterCase(char char1) {
    return isupper(char1) ? tolower(char1) : toupper(char1);
}

bool IsVowel(char Ch1) 
{
    Ch1 = tolower(Ch1);

    return ((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i') || (Ch1 == 'o') || (Ch1 == 'u'));
}



int main() {
    char Ch1 = ReadChar();

    if (IsVowel(Ch1))
    {
        cout << "\nYes, Letter \'" << Ch1 << "\' Is Vowel.";
    }
    else
    {
        cout << "\nNO, Letter \'" << Ch1 << "\' Is NOT Vowel.";
    }

    // Pause the system to view output
    system("pause>0");
    return 0;
}