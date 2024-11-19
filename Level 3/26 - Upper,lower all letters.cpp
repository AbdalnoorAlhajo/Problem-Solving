// #26 - Upper,lower all letters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
    string word;

    cout << "Please Enter a word: ";
    getline(cin, word);

    return word;
}

string UpperAllString(string Word)
{
    for (short i = 0; i < Word.length(); i++)
    {
        Word[i] = toupper(Word[i]); 
    }
    return Word;
}

string LowerAllString(string Word)
{
    for (short i = 0; i < Word.length(); i++)
    {
        Word[i] = tolower(Word[i]);
    }
    return Word;
}

int main()
{
    string word = ReadString();

    cout << "\nString:\n";
    cout << word << endl;

    cout << "\nUpper All letters in string: \n";
    cout << UpperAllString(word) << endl;

    cout << "\nLower All letters in string: \n";
    cout << LowerAllString(word) << endl;
    return 0;
}

