// #25-LowerFirstLetterOfEachWord.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

string LowerFirstLetterOfEachWord(string Word)
{
    bool IsFirstLetter = true;

    for (short i = 0; i < Word.length(); i++)
    {
        if (Word[i] != ' ' && IsFirstLetter)
        {
            Word[i] = tolower(Word[i]);
        }

        IsFirstLetter = (Word[i] == ' ' ? true : false);
    }
    return Word;
}

int main()
{
    string word = ReadString();

    cout << "\nString after conversion:\n";
    word = LowerFirstLetterOfEachWord(word);

    cout << word << endl;
    return 0;
}

