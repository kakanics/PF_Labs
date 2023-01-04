#include <iostream>
using namespace std;

void convertor(int);

main()
{
    int input;
    
    cout << "Please enter a 2 digit number: ";
    cin >> input;

    convertor(input);
}

void convertor(int number)
{
    int firstDigit;
    int secondDigit;

    firstDigit = number /10;
    secondDigit = number %10;

    if(firstDigit == 1)
    {
        cout << "ten";
    }
    if(firstDigit == 2)
    {
        cout << "twenty-";
    }
    if(firstDigit == 3)
    {
        cout << "thirty-";
    }
    if(firstDigit == 4)
    {
        cout << "forty-";
    }
    if(firstDigit == 5)
    {
        cout << "fifty-";
    }
    if(firstDigit == 6)
    {
        cout << "sixty-";
    }
    if(firstDigit == 7)
    {
        cout << "seventy-";
    }
    if(firstDigit == 8)
    {
        cout << "eighty-";
    }
    if(firstDigit == 9)
    {
        cout << "ninety-";
    }

    if(secondDigit == 0 && firstDigit == 0)
    {
        cout << "zero";
    }
    if(secondDigit == 1)
    {
        cout << "one";
    }
    if(secondDigit == 2)
    {
        cout << "two";
    }
    if(secondDigit == 3)
    {
        cout << "three";
    }
    if(secondDigit == 4)
    {
        cout << "four";
    }
    if(secondDigit == 5)
    {
        cout << "five";
    }
    if(secondDigit == 6)
    {
        cout << "six";
    }
    if(secondDigit == 7)
    {
        cout << "seven";
    }
    if(secondDigit == 8)
    {
        cout << "eight";
    }
    if(secondDigit == 9)
    {
        cout << "nine";
    }

}