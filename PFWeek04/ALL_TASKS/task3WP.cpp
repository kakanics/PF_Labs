#include <iostream>
using namespace std;

void add(int n1, int n2);

main()
{
    int num1;
    int num2;

    cout<<"Please enter a number: ";
    cin >> num1;
    cout<<"Please enter a number: ";
    cin >> num2;

    add(num1, num2);
}

void add(int n1, int n2)
{
    int sum;
    sum = n1+n2;
    cout<< n1 << "+" << n2 << "= "<< sum;
}