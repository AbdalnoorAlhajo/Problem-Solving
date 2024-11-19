// #23-Print First Lellter In Each Word.

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

void PrintFirstLetterOfEachWord(string Word)
{
    bool IsFirstLetter = true;

    for (short i = 0; i < Word.length(); i++)
    {
        if (Word[i] != ' ' && IsFirstLetter)
        {
            cout << Word[i] << endl;
        }

        IsFirstLetter = (Word[i] == ' ' ? true : false);
    }
}

int main()
{
    string word = ReadString();

    cout << "\nFirst Letters in Word : \n";
    PrintFirstLetterOfEachWord(word);

    return 0;
}

