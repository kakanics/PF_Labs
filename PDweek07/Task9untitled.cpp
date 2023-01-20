#include <iostream>
using namespace std;

main()
{
    int input;
    cout << "Enter a number and witness beauty: ";
    cin >> input;

    for(int i = 0; i<input;i++)
    {
        for(int j = input-i; j>0;j--)
        {
            cout << "*";
        }
        for(int j = 1; j<=2*(i);j++)
        {
            cout << " ";
        }
        for(int j = input-i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 1; i<=input;i++)
    {
        for(int j = 1; j<=i;j++)
        {
            cout << "*";
        }
        for(int j = 1; j<=2*(input-i);j++)
        {
            cout << " ";
        }
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}