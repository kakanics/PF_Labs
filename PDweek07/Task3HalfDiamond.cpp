#include <iostream>
using namespace std;

main()
{
    int input;
    cout << "please enter a number: ";
    cin >> input;

    for (int i = input; i > 0; i--)
    {
        for(int j = 1; j <=i; j++)
        {
            cout << " ";
        }
        for(int j = input-i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    
    for (int i = 0; i <= input; i++)
    {
        for(int j = 1; j <=i; j++)
        {
            cout << " ";
        }
        for(int j = input-i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}