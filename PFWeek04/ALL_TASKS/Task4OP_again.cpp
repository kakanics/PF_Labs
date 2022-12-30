#include <iostream>
using namespace std;

void namePrinter(string name);

main()
{
    string name;
    cout << "Please enter your name: ";
    while(true)
    {
        cin >> name;
        if(name == "Irzam")
        {
            while(true)
            {
                namePrinter(name);
            }
        }
        if(name != "Irzam")
        {
            cout << "Please, please, please, type Irzam: ";
        }
    }
}

void namePrinter(string name)
{
    cout << name << " ";
}