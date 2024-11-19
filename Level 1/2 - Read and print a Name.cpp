// #2 - Read and print a Name.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

string ReadName() {
    string name;

    cout << "What is your name: ";
    getline(cin, name);

    return name;
}

void PrintName(string name) {
    cout << "Name: " << name << endl;

}

int main()
{
    PrintName(ReadName());

    return 0;
}
