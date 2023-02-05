#include<iostream>
using namespace std;

main()
{
    int numOfResistors;
    cout << "Enter the number of resistors: ";
    cin >> numOfResistors;

    int resistors[numOfResistors];
    float sum = 0;

    for(int i = 0; i < numOfResistors;i++)
    {
        cout << "Please enter the resistance: ";
        cin >> resistors[i];
        sum += resistors[i];
    }
    cout << sum;
}