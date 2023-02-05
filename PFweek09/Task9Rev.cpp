#include <iostream>
using namespace std;

main()
{
    string name;
    getline(cin, name);
    int x = 0;

    for(int i = 0; name[i]!='\0';i++)
    {
        x=i+1;
    }
    for(int i = x-1;i>=0;i--)
    {
        cout << name[i];
    }
}