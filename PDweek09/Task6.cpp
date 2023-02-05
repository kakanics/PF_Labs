#include <iostream>
using namespace std;

main()
{
    
    int numbers[100];
    int length=0;
    bool isComplete = true;
    int evenOddTransformation;
    
    for(int i = 0; i <100&&isComplete; i++)
    {
        cout << "Enter a number: ";
        cin>>numbers[i];
        length = i+1;
        cout << "press 1 to enter more numbers: ";
        cin >> isComplete;
    }
    cout << "Enter the number of times to apply even odd transformations: ";
    cin >> evenOddTransformation;

    for(int i = 0; i<length;i++)
    {
        if(numbers[i]%2==0)
        {
            numbers[i]-=2*evenOddTransformation;
        }
        else
        {
            numbers[i]+=2*evenOddTransformation;
        }
        cout << numbers[i] << ", ";
    }
}