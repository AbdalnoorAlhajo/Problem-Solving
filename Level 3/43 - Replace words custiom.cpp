// #43 - Replace words custiom.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

vector<string> SplitString(string S1, string Delim) {
    vector<string> vString;
    short pos = 0;
    string sWord;

    // Use find() function to get the position of the delimiters
    while ((pos = S1.find(Delim)) != std::string::npos) {
        sWord = S1.substr(0, pos); 
        if (sWord != "") {
            vString.push_back(sWord);
        }
        S1.erase(0, pos + Delim.length()); // Erase until position and move to next word.
    }

    if (S1 != "") {
        vString.push_back(S1); // Add last word of the string.
    }

    return vString;
}

void ReplaceWord(vector<string>& vS1, string ReplacedW, string ReplaceWith, bool MatchCase = true) 
{

    for (string& Word : vS1) 
    {
        if (MatchCase && Word == ReplacedW) 
        {
            Word = ReplaceWith;
        }
       
        else if (!MatchCase) 
        {
            ReplacedW[0] = toupper(ReplacedW[0]);
            if (Word == ReplacedW) 
            {
                Word = ReplaceWith;
            }
        }
    }
}

int main() {
    string S1 = ReadString();
    vector<string>vS1 = SplitString(S1, " ");

    ReplaceWord(vS1, "Iraq", "Saudi",false);
    cout << "\n\n String After replacing: ";

    for (string& Word : vS1)
    {
        cout << Word << " ";
    }
    system("pause>0");
    return 0;
}
