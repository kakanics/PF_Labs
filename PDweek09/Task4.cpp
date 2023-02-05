#include<iostream>
using namespace std;

int getLength(int);

main()
{
    int numbers[100];
    int length=0;
    int numberLength;
    int currentDigit;
    int currentNumber;
    int numberThatContains7;
    bool isComplete = true;
    bool has7 = false;
    
    for(int i = 0; i <100&&isComplete; i++)
    {
        cout << "Enter a number: ";
        cin>>numbers[i];
        length = i+1;
        cout << "press 1 to enter more numbers: ";
        cin >> isComplete;
    }
    for(int i = 0; i < length;i++)
    {
        numberLength=getLength(numbers[i]);
        numberThatContains7 = numbers[i];
        currentNumber=numbers[i];
        for(int j = 0; j<numberLength;j++)
        {
            currentDigit=currentNumber%10;
            if(currentDigit==7)
            {
                has7 = true;
                break;
            }
            currentNumber/=10;
        }
        if(has7)
        {
            break;
        }
    }
    if(has7)
    {
        cout << numberThatContains7 << " contains 7, therefore, I would like to declare that this array contains a 7";
    }
    else
    {
        cout << "Error: 404: SearchException: NotFound";
    }
}
int getLength(int input)
{
    int length = 0;
    while(input>0)
    {
        input/=10;
        length++;
    }
    return length;
} 