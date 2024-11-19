// #50 - ATM PIN 3 times.cpp
//

#include <iostream>
using namespace std;

string ReadPinCode()
{
    string PinCode;
    cout << "Please enter PIN code: ";
    cin >> PinCode;

    return PinCode;
}

bool Login()
{
    string PinCode;
    int counter = 3;
    do
    {
        counter--;
        PinCode = ReadPinCode();
        
        if (PinCode == "1234")
            return 1;
        else
        {
            cout << "\nWrong PIN \n";
            system("color 4F");// turn screen to Red
            cout << "you have " << counter << " times left";
        }
    } while (PinCode != "1234" && counter >=1 );

    return 0;
}

int main()
{
    if (Login())
    {
        system("color 2F"); // turn screen to green
        cout << "\n Your account balance = " << 7500 << endl;
    }
    else
    {
        cout << "\n your card is locked";
    }
    return 0;
}
