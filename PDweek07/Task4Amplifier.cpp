#include<iostream>
using namespace std;

void printer(int higherBound);

main()
{
    int input;
    cout << "please enter a number: ";
    cin >> input;

    printer(input);
}

void printer(int higherBound)
{
    for (int i = 1; i <= higherBound; i++)
    {
        if(i%4==0)
        {
            cout << i*10 << ", ";
        }
        else
        {
            cout << i << ", ";    
        }
    }
    
}
