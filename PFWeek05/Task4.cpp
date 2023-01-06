#include <iostream>

using namespace std;

bool IsEvenish(int i);

main()
{
    int input;
    bool isEvenish;

    cout << "Please enter a 5 digit number: ";
    cin >> input;

    isEvenish = IsEvenish(input);
    if(isEvenish == true)
    {   
        cout << "given number is Evenish";
    }
    if(isEvenish == false)
    {
        cout << "given number is Oddish";
    }

}


bool IsEvenish(int i)
{
    int firstDigit;
    int secondDigit;
    int thirdDigit;
    int fourthDigit;
    int fifthDigit;
    int result;

    fifthDigit = i%10;
    fourthDigit = (i/10)%10;
    thirdDigit = (i/100)%10;
    secondDigit = (i/1000)%10;
    fifthDigit = i/10000;

    result = firstDigit + secondDigit + thirdDigit + fourthDigit + fifthDigit;
    
    if(result % 2 == 0)
    {
        return true;
    }
    return false;

}