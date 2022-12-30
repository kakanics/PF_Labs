#include <iostream>
using namespace std;

void add();

main()
{

    add();
}

void add()
{
    int sum;
    int num1;
    int num2;

    cout<<"Please enter a number: ";
    cin >> num1;
    cout<<"Please enter a number: ";
    cin >> num2;

    sum = num1+num2;
    cout<< num1 << "+" << num2 << "= "<< sum;
}