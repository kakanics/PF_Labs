#include <iostream>
using namespace std;

int digitsFunc(int, int);

main()
{
    int num;
    int reqNum;

    int digits;
    cout << "Please enter a number and the number that you wanna check in that number for frequency: ";
    cin >> num >> reqNum;

    digits = digitsFunc(num, reqNum);
    cout << digits;
}

int digitsFunc(int num, int reqNum)
{
    int x = 0;
    int digit;
    for(int i = 1; num > 0; i++)
    {
        digit = num%10;
        if(digit==reqNum){
            x=x+1;
        }
        num=num/10;
    }
    return x;
}
