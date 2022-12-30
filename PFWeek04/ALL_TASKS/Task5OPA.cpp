#include <iostream>
using namespace std;

void greaterNum(int num1, int num2);

main()
{
    int number1;
    int number2;

    while(true)
    {
        cout << "Please enter a number: ";
        cin  >> number1;
        cout << "Please enter a number: ";
        cin  >> number2;
        greaterNum(number1,number2);
    }
}

void greaterNum(int num1, int num2)
{
    if(num1>num2)
    {
        cout << num1 << " is greater than " << num2<<endl;
    }
    if(num1<num2)
    {
        cout << num1 << " is less than " << num2<<endl;
    }
    if(num1==num2)
    {
        cout << num1 << " is equal " << num2<<endl;
    }
}