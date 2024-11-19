// #40 - JoinString(Overloading).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <vector>

using namespace std;

string JoinString(vector<string> vSplitedString, string Delim = " ")
{
    string S1 = "";
    for (string& Word : vSplitedString)
    {
        S1 += Word + Delim;
    }
    return S1.substr(0, S1.length() - Delim.length());
}

string JoinString(string Sarr[4],short Length , string Delim = " ")
{
    string S1 = "";
    for (int i = 0; i < Length; i++)
    {
        S1 = S1 + Sarr[i] + Delim;
    }
    return S1.substr(0, S1.length() - Delim.length());
}

int main()
{
    vector<string> vSplitedWords = { "Abdalnoor", "how", "are", "you" };
    
    string Sarr[] = { "Abdalnoor", "Welcome", "To", "Programming" };

    cout << "\nVector after join: " << JoinString(vSplitedWords, " ") << endl;

    cout << "\nArray after join: " << JoinString(Sarr,4 , " ") << endl;

    system("pause>0");

    return 0;
}
