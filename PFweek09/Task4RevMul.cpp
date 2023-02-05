#include <iostream>
using namespace std;

main()
{
    int size = 0;
    cin >> size;

    int array[size];
    int num;
    for(int i = 0; i < size; i ++)
    {
        cout<<"Enter a number: ";
        cin >> array[i];
    }

    cout << "Enter a number that you wanna multiply with in reverse order: ";
    cin >> num;
    for(int i = size-1;i>=0;i--)
    {
        cout << array[i]*num<<endl;
    }

}