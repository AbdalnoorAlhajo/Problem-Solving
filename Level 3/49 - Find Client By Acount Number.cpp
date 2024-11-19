// #49 - Find Client By Acount Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

const string ClientsFileName = "Clients.txt";

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

vector<string> SplitString(string S1, string Delim)
{
    vector<string> vString;
    size_t pos = 0;
    string sWord;

    while ((pos = S1.find(Delim)) != string::npos)
    {
        sWord = S1.substr(0, pos);
        if (!sWord.empty())
        {
            vString.push_back(sWord);
        }
        S1.erase(0, pos + Delim.length());
    }

    if (!S1.empty())
    {
        vString.push_back(S1);
    }

    return vString;
}

sClient ConvertLinetoRecord(string Line, string Seperator = "#//#")
{
    sClient Client;
    vector<string> vClientData;
    vClientData = SplitString(Line, Seperator);

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]); // Convert string to double
    return Client;
}

vector<sClient> LoadCleintsDataFromFile(string FileName)
{
    vector<sClient> vClients;
    fstream MyFile;
    MyFile.open(FileName, ios::in);

    if (MyFile.is_open())
    {
        string Line;
        while (getline(MyFile, Line))
        {
            sClient Client = ConvertLinetoRecord(Line);
            vClients.push_back(Client);
        }
        MyFile.close();
    }

    return vClients;
}

sClient FindClientByAccountNumber(vector<sClient> vClients, string AccountNumber)
{
    for (sClient& Client : vClients)
    {
        if (Client.AccountNumber == AccountNumber)
        {
            return Client;
        }
    }
}

bool IsClientExcit(vector<sClient> vClients, string AccountNumber)
{
    for (sClient& Client : vClients)
    {
        if (Client.AccountNumber == AccountNumber)
        {
            return true;
        }
    }
    return false;
}

string ReadClientAccountNumber() 
{
    string AccountNumber = "";
    cout << "\nPlease enter AccountNumber: ";
    cin >> AccountNumber;
    return AccountNumber;
}

void PrintClientCard(sClient Client) 
{
    cout << "\nThe following are the client details:\n";
    cout << "\nAccount Number: " << Client.AccountNumber;
    cout << "\nPin Code      : " << Client.PinCode;
    cout << "\nName          : " << Client.Name;
    cout << "\nPhone         : " << Client.Phone;
    cout << "\nAccount Balance: " << Client.AccountBalance;
}

int main() {
    vector<sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
    
    string ClientAccount = ReadClientAccountNumber();

    if (IsClientExcit(vClients, ClientAccount))
    {
        sClient Client = FindClientByAccountNumber(vClients, ClientAccount);

        PrintClientCard(Client);
    }
    else
    {
        cout << "(" << ClientAccount << ") is Not Fount" << endl;
    }

    system("pause>0");
    return 0;
}
