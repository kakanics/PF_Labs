#include <iostream>
using namespace std;

int digitsFunc(int);

main()
{
    int num;
    int reqNum;

    int digits;
    cout << "please enter a number to get digit sum: ";
    cin >> num;

    digits = digitsFunc(num);
    cout << digits;
}

int digitsFunc(int num)
{
    int x = 0;          //stores the final answer
    int digit = 0;      //current selected digit
    int sum = 0;        //sum of preceeding digits
    while( num > 0)
    {
        digit = num%10;
        sum = sum + digit;
        num=num/10;
        x = sum;
    }
    return x;
}
