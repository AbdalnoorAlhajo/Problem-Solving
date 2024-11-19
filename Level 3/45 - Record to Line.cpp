// #45 - Record to Line.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct stClientData
{
    string AcountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AcountBalance;
};

stClientData ReadClientData()
{
    stClientData ClientData;

    cout << "Please Enter Acount Number: ";
    getline(cin, ClientData.AcountNumber);

    cout << "Please Enter Your Name: ";
    getline(cin, ClientData.Name);

    cout << "Please Enter Pin Code: ";
    getline(cin, ClientData.PinCode);

    cout << "Please Enter Your Phone: ";
    getline(cin, ClientData.Phone);

    cout << "Please Enter Acount Balance: ";
    cin >> ClientData.AcountBalance;

    return ClientData;

}

string ConvertRecordToLine(stClientData ClientData, string Delim = "#//#")
{
    string S1 = "";

    S1 += ClientData.AcountNumber + Delim;
    S1 += ClientData.PinCode + Delim;
    S1 += ClientData.Name + Delim;
    S1 += ClientData.Phone + Delim;
    S1 += to_string(ClientData.AcountBalance);

    return S1;
}

int main()
{
    stClientData ClientData = ReadClientData();

    cout << "\n\n Convert Record To Line: \n";
    cout << ConvertRecordToLine(ClientData) << endl;

    system("pause>0");
    return 0;
}

