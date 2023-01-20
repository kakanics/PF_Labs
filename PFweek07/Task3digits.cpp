#include <iostream>
using namespace std;

int digitsFunc(int);

main()
{
    int input;
    int digits;
    cout << "please enter a number: ";
    cin >> input;

    digits = digitsFunc(input);
    if(input == 0)
    {
        cout << 1;
    }
    else
    {
    cout << digits;
    }
}

int digitsFunc(int num)
{
    if(num < 0)         //makes num always possible so that answer is always correct
    {
        num = num*-1;
    }
    int x = 0;
    for(int i = 1; num > 0; i++)
    {
        num=num/10;
        x = i;
    }
    return x;
}
