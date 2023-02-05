#include <iostream>
using namespace std;

main()
{
    string name;
    getline(cin, name);
    
    for(int i = 0; name[i]!='\0';i++)
    {
        cout << name[i] << "=" <<i << endl; 
    }
}