#include <iostream>
using namespace std;

main()
{
    int size = 0;
    cin >> size;

    int array[size];
    float sum = 0;
    float average;

    for(int i = 0; i < size; i ++)
    {
        cout<<"Enter a number: ";
        cin >> array[i];
        sum+=array[i] ;
    }
    average = sum/size;
    cout << average;

}