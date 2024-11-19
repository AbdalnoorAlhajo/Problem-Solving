// #47 - Add Clients To File.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

sClient ReadNewClient() 
{
    sClient Client;
    cout << "Enter Account Number? ";
    getline(cin >> ws, Client.AccountNumber);
    cout << "Enter PinCode? ";
    getline(cin, Client.PinCode);
    cout << "Enter Name? ";
    getline(cin, Client.Name);
    cout << "Enter Phone? ";
    getline(cin, Client.Phone);
    cout << "Enter AccountBalance? ";
    cin >> Client.AccountBalance;
    return Client;
}

string ConvertRecordToLine(sClient Client, string Separator = "#//#") 
{
    string stClientRecord = "";
    stClientRecord += Client.AccountNumber + Separator;
    stClientRecord += Client.PinCode + Separator;
    stClientRecord += Client.Name + Separator;
    stClientRecord += Client.Phone + Separator;
    stClientRecord += to_string(Client.AccountBalance);
    return stClientRecord;
}

void AddClientToFile(string FilePath, string Client)
{
    fstream MyFile;

    MyFile.open(FilePath, ios::out | ios:: app);

    if (MyFile.is_open())
    {
        MyFile << Client << "\n\n";

        MyFile.close();
    }
}

void AddClients()
{
    bool AddMore = true;

    sClient Client;
    string S1;

    while (AddMore)
    {
        cout << "\nAdding New client: \n";
        Client = ReadNewClient();
        S1 = ConvertRecordToLine(Client);
        AddClientToFile("MyFile.txt", S1);

        cout << "Do you wanna add more ? ";
        cin >> AddMore;
        system("cls");
    }
}

int main() 
{
    AddClients();
    return 0;
}
