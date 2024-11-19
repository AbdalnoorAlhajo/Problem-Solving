// #41 - Reverse String.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <vector>

using namespace std;


string ReadString() {
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

string ReverseString(vector<string> vSplitedString)
{
    string S1 = "";
    for (int i = vSplitedString.size() - 1; i >= 0; i--)
    {
        S1 += vSplitedString[i] + " ";
    }
    return S1;
}

int main()
{
    string S1 = ReadString();
    vector<string>vSplitedWords = SplitString(S1, " ");

    cout << "\n\nString After Reversing: " << ReverseString(vSplitedWords) << endl;
    system("pause>0");

    return 0;
}
