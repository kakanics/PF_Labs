#include <iostream>
using namespace std;

void printFib(int);

main()
{
    int input;
    cout << "please enter the length of fibonacci sequence: ";
    cin >> input;

    if(input >2)
    {
        printFib(input);
    }
    else if(input == 1)                 //edge case
    {
        cout << endl << 0; 
    }
    else if(input == 2)                 //edge case
    {
        cout <<  endl << 0 << endl << 1; 
    }
}

void printFib(int length)
{
    int num1 = 0;
    int num2 = 1;
    int sum = 0;

    cout << endl <<  0 << endl;     //first two numbers of the sequence
    cout << 1 << endl;

    for(int i = 0; i < length-2; i++)   //Calculator
    {
        sum = num1+num2;
        num1 = num2;
        num2 = sum;
        cout << sum << endl;
    }
}
