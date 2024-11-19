// #24-Upper Later Of each word
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

string UpperFirstLetterOfEachWord(string Word)
{
    bool IsFirstLetter = true;

    for (short i = 0; i < Word.length(); i++)
    {
        if (Word[i] != ' ' && IsFirstLetter)
        {
            Word[i] = toupper(Word[i]);
        }

        IsFirstLetter = (Word[i] == ' ' ? true : false);
    }
    return Word;
}

int main()
{
    string word = ReadString();

    cout << "\nString after conversion:\n";
    word = UpperFirstLetterOfEachWord(word);

    cout << word << endl;
    return 0;
}

