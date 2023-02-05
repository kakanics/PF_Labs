#include <iostream>
using namespace std;

bool isEven(string);

main()
{
    string input;
    bool output;

    cout << "Enter a word: ";
    cin >> input;
    output=isEven(input);
    if(output)
    {
        cout << "true!";
    }
    else
    {
        cout << "false";
    }
}

bool isEven(string input)
{
    bool even = false;
    if(input.length()%2==0)
    {
        even = true;
    }
    return even;
}
