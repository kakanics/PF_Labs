#include<iostream>
using namespace std;

main()
{
    string name;
    char checker;
    bool isIn = false;

    getline(cin, name);
    cin >> checker;

    for(int i = 0;i<name.length();i++)
    {
        if(checker == name[i])
        {
            isIn=true;
        }
    }
    if(isIn)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found";
    }
}