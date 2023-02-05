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
    for(int i = size-1;i>=0;i--)
    {
        cout << array[i] << " ";
    }

}