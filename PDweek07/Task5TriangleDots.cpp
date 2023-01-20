#include <iostream>
using namespace std;

main()
{
    int input;
    int sum = 0;
    cout << "please enter a number: ";
    cin >> input;

    for(int i = 1; i <= input; i++)
    {
        sum = sum+i;
    }
    cout << "This triangle will have: "<< sum << " dots";
}