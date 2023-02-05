#include <iostream>
using namespace std;

main()
{
    int size = 0;
    cin >> size;

    int array[size];

    for(int i = 0; i < size; i ++)
    {
        cout<<"Enter a number: ";
        cin >> array[i];
    }

    int smallestNum = array[0];
    for(int i = 0;i<size;i++)
    {
        if(smallestNum>array[i])
        {
            smallestNum = array[i];
        }
    }
    cout << smallestNum;

}