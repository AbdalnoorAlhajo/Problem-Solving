// #46-Convert Line of data to record.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct sClient {
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

vector<string> SplitString(string S1, string delim = " ")
{
    vector<string> vString;
    short count = 0;
    short pos = 0;
    string sWord;

    // use find() function to get the position of the delimiters
    while ((pos = S1.find(delim)) != std::string::npos) {
        sWord = S1.substr(0, pos);
        if (sWord != "") {
            vString.push_back(sWord);
        }
        S1.erase(0, pos + delim.length()); // erase() until position and move to the next word
    }

    if (S1 != "") {
        vString.push_back(S1);
    }
    return vString;
}

sClient ConvertLineToRecord(string Record, string delim = "#//#")
{
    vector<string> S1 = SplitString(Record, delim);
    sClient Client;

    Client.AccountNumber = S1[0];
    Client.PinCode = S1[1];
    Client.Name = S1[2];
    Client.Phone = S1[3];
    Client.AccountBalance = stod(S1[4]);

    return Client;
}

void PrintClientRecord(sClient Client) {
    cout << "\n\nThe following is the extracted client record:\n";
    cout << "\nAccount Number: " << Client.AccountNumber;
    cout << "\nPin Code      : " << Client.PinCode;
    cout << "\nName          : " << Client.Name;
    cout << "\nPhone         : " << Client.Phone;
    cout << "\nAccount Balance: " << Client.AccountBalance;
}


int main() 
{
    string stLine = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#079999#//#5270.000000";

    cout << "\nLine Record is:\n";  
    cout << stLine;

    sClient Client = ConvertLineToRecord(stLine);

    PrintClientRecord(Client);

    system("pause>0");
    return 0;
}
