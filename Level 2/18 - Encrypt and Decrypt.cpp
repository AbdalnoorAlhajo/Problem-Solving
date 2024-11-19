// #18 - Encrypt and Decrypt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

string ReadText()
{
    string name;
    cout << "Enter 3-Letter password(password should be capital), please: ";
    getline(cin, name);

    return name;
}

string EncryptText(string Text, short EncryptKey)
{
    for (int i = 0; i < Text.length(); i++)
    {
        Text[i] = char(int(Text[i]) + EncryptKey);
    }

    return Text;
}

string DecryptText(string Text, short EncryptKey)
{
    for (int i = 0; i < Text.length(); i++)
    {
        Text[i] = char(int(Text[i]) - EncryptKey);
    }

    return Text;
}

int main()
{
    short EncryptKey = 2;
    string Text = ReadText();
    string AfterEncryptText = EncryptText(Text, EncryptKey);
    string AfterDecryptText = DecryptText(AfterEncryptText, EncryptKey);

    cout << "Name Before Encrypt: " << Text << endl;
    cout << "Name after Encrypt: " << AfterEncryptText << endl;
    cout << "Name after decrypt: " << AfterDecryptText << endl;
    return 0;
}
