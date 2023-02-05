#include<iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter size of array";
    cin >> size;

    int firstArray[2];
    int secondArray[size];
    int mergedArray[size+2];

    for(int i = 0; i < 2; i ++)
    {
        cout << "Enter number for FIRST ARRAY: ";
        cin >> firstArray[i];
    }
    
    for(int i = 0; i < size; i ++)
    {
        cout << "Enter number for SECOND ARRAY: ";
        cin >> secondArray[i];
    }
    for(int i = 0; i < size+2;i++)
    {
        if(i == 0)
        {
            mergedArray[0]=firstArray[0];
        }
        else if(i == size+1)
        {
            mergedArray[size+1]=firstArray[1];
        }
        else
        {
            mergedArray[i]=secondArray[i-1];
        }
    }
    for(int i = 0; i < size+2;i++)
    {
        cout << mergedArray[i] << endl;
    }
}