// # 35 - Piggy Bank Calculator.cpp
//

#include <iostream>
using namespace std;

struct stPiggyBankContent 
{
    int Pennies, Nikels, Dimes, Quarters, Dollors;
};

stPiggyBankContent ReadPiggyBankContent()
{
    stPiggyBankContent PiggyBankContent;

    cout << "Enter how much pennies you have: \n";
    cin >> PiggyBankContent.Pennies;

    cout << "Enter how much Nikels you have: \n";
    cin >> PiggyBankContent.Nikels;

    cout << "Enter how much Dimes you have: \n";
    cin >> PiggyBankContent.Dimes;

    cout << "Enter how much Quarters you have: \n";
    cin >> PiggyBankContent.Quarters;

    cout << "Enter how much Dollors you have: \n";
    cin >> PiggyBankContent.Dollors;

    return PiggyBankContent;
}

int CalculateTotalPennies(stPiggyBankContent PiggyBankContent)
{
    int TotalPennies = 0;

    TotalPennies = PiggyBankContent.Pennies * 1 + PiggyBankContent.Nikels * 5 + PiggyBankContent.Dimes * 10 
        + PiggyBankContent.Quarters * 25 + PiggyBankContent.Dollors * 100;

    return TotalPennies;
}


int main()
{
    int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());

    cout << "\n Total Pennies = " << TotalPennies << endl;
    cout << "\n Total Dollars = " << (float)TotalPennies / 100 << endl;

    return 0;
}

