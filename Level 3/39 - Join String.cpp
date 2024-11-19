// #39 - Join String.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int main() 
{
    vector<string> vSplitedWords = {"Abdalnoor", "how", "are", "you"};
    
    cout << "\n\nString After Joining: " << JoinString(vSplitedWords, ", ") << endl;

    system("pause>0");

    return 0;
}
