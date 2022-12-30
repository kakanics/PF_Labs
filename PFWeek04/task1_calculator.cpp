#include <iostream>
using namespace std;

void sum(int num1,int num2);
void multiply(int num1,int num2);
void subtract(int num1,int num2);
void divide(int num1,int num2);


main()
{
    int num1;
    int num2;
    char op;

    while(true)
    {
        cout << "Please enter a number: ";
        cin  >> num1;
        cout << "Please enter a number: ";
        cin  >> num2;
        cout << "Please select the operation (+ - * /): ";
        cin  >> op;

        if(op == '+')
        {
            sum(num1, num2);
        } 
        if(op == '-')
        {
            subtract(num1, num2);
        } 
        if(op == '*')
        {
            multiply(num1, num2);
        } 
        if(op == '/')
        {
            divide(num1, num2);
        } 
    }
}

void sum(int num1, int num2)
{
    int result;
    result = num1+num2;
    cout<<"result is: "<<result<<endl;
}
void subtract(int num1, int num2)
{
    int result;
    result = num1-num2;
    cout<<"result is: "<<result<<endl;
}
void multiply(int num1, int num2)
{
    int result;
    result = num1*num2;
    cout<<"result is: "<<result<<endl;
}
void divide(int num1, int num2)
{
    int result;
    result = num1/num2;
    cout<<"result is: "<<result<<endl;
}