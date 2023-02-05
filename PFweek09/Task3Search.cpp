#include <iostream>
using namespace std;

main()
{
    int size = 0;
    cin >> size;

    int array[size];
    int number;
    bool flag;

    for(int i = 0; i < size; i ++)
    {
        cout<<"Enter a number: ";
        cin >> array[i];
    }

    cout << "Enter the number you wanna find in the array: ";
    cin >> number;
    for(int i = 0;i<size;i++)
    {
        if(array[i]==number)
        {
            flag = true;
            break;
        }
    }
    if(flag)
    {
        cout << "found the number";
    }
    else
    {
        cout << "Didn't find the number";
    }

}