#include <iostream>

using namespace std;

bool isUpperCase(char);

main()
{
    char input;
    bool isUpper;

    cout << "Enter a or A: ";
    cin >> input;

    isUpper = isUpperCase(input);
    if(isUpper == true)
    {
        cout << "Entered character is upper case";
    }
    if(isUpper == false)
    {
        cout << "Entered character is lower case";
    }
}


bool isUpperCase(char input)
{
    if(input == 'A'){
        return true;
    }
    return false;
}