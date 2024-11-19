// #35- Print Each word in string.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void PrintEachWordInString(string S1)
{
    cout << "\nEach Word in string are: \n";
    for (int i = 0; i < S1.length(); i++)
    {
        if (S1[i] == ' ' && S1[i + 1] == ' ')
            continue;
        else if (S1[i] == ' ')
            cout << "\n";
        else
            cout << S1[i];
    }
}

int main()
{
    PrintEachWordInString(ReadString());

    system("pause>0");
}
