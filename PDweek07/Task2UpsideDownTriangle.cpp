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
            cout << "*";
        }
        cout << endl;
    }
    
}