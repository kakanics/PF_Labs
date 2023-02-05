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
    cout << "Length of given string is: " << x;
}