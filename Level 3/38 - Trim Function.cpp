// #38 - Trim Function.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

string TirmLeft(string S1, string Delim) 
{
    // use find() function to get the position of the delimiters
    while (S1.substr(0, Delim.length()) == Delim) 
    {
        S1.erase(0,Delim.length()); // erase() until position and move to the next word
    }

    return S1;
}

string TirmRight(string S1, string Delim)
{
    // use find() function to get the position of the delimiters
    while (S1.substr(S1.length() - Delim.length(), S1.length() - 1) == Delim)
    {
        S1.erase(S1.length() - Delim.length(), S1.length() - 1);

    }

    return S1;
}

string Tirm(string S1, string Delim)
{
    S1 = TirmLeft(S1, Delim);
    S1 = TirmRight(S1, Delim);
    return S1;
}

// Main function
int main() {
    string S1 = ReadString();
    
    cout << "\n\nString after Left Tirming: " << TirmLeft(S1,"#") << endl;

    cout << "\n\nString after Right Tirming: " << TirmRight(S1, "#") << endl;

    cout << "\n\nString after Tirming: " << Tirm(S1, "#") << endl;

    system("pause>0");
    return 0;
}
