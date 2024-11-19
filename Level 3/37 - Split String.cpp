// #37 - Split String.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <vector>

using namespace std;

string ReadString()
{
    string S1;
    cout << "Please Enter Your String?\n";
    getline(cin, S1);
    return S1;
}


vector<string> SplitWords(string S1, string delim = " ")
{
    vector<string> vSplitedWords;
    short count = 0;
    short pos = 0;
    string sWord; 

    // use find() function to get the position of the delimiters
    while ((pos = S1.find(delim)) != std::string::npos) {
        sWord = S1.substr(0, pos); // store the word
        if (sWord != "") {
            vSplitedWords.push_back(sWord);
        }
        S1.erase(0, pos + delim.length()); // erase() until position and move to the next word
    }

    if (S1 != "") {
        vSplitedWords.push_back(S1);
    }
    return vSplitedWords;
}

int main() {
    string S1 = ReadString();
    vector<string> vSplitedWords = SplitWords(S1);

    cout << "Tokens = " << vSplitedWords.size() << endl;
    for (const string &Word : vSplitedWords)
    {
        cout << Word << endl;
    }
    system("pause>0");
    return 0;
}
