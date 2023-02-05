#include<iostream>
using namespace std;

main()
{
    string input[4];
    string check;
    bool isSame=true;

    for(int i = 0; i < 4; i++)
    {
        cout << "give an input:";
        cin >> input[i];
    }
    check = input[0];
    for(int i = 0; i<4;i++)
    {
        if(!(check==input[i]))
        {
            isSame=false;
        }
    }
    if(isSame)
    {
        cout << "True";
    }
    else
    {
        cout << "The answer is false";
    }
}