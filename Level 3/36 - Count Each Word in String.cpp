// #36-Count Each Word in String.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>

using namespace std;

string ReadString()
{
    string S1;
    cout << "Please Enter Your String?\n";
    getline(cin, S1);
    return S1;
}


int CountWords(string S1)
{
    short count = 0;
    string delim = " "; // delimiter
    short pos = 0;
    string sWord; 

    // use find() function to get the position of the delimiters
    while ((pos = S1.find(delim)) != std::string::npos) {
        sWord = S1.substr(0, pos); // store the word
        if (sWord != "") {
            count++;
        }
        S1.erase(0, pos + delim.length()); // erase() until position and move to the next word
    }

    if (S1 != "") {
        count++;
    }
    return count;
}

int main() {
    string S1 = ReadString();
    cout << "\nThe number of words in your string is: ";
    cout << CountWords(S1);
    system("pause>0");
    return 0;
}
