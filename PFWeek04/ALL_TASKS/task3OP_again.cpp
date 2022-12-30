#include <iostream>
using namespace std;

void namePrinter(string name);

main()
{
    string name;
    cout << "Please enter your name: ";
    cin >> name;
    while(true)
    {
        namePrinter(name);
    }
}

void namePrinter(string name)
{
    cout << name << " ";
}