#include<iostream>
using namespace std;

main()
{
    string name;
    char checker;

    getline(cin, name);
    cin >> checker;

    if(name[name.length()-1]==checker)
    {
        cout << "same";
    }
    else 
    {
        cout << "Not same";
    }
}