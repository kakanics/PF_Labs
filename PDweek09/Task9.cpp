#include<iostream>
using namespace std;

string moves[10] ={"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado",
"Pop", "Lock", "Arabesque"};

bool Validate(string);
int returnCharAtIndex(string, int);

main()
{
    char input[4];
    cin >> input;
    int currentDigit;
    int currentTask;

    if(Validate(input)==false)
    {
        cout << "Enter a valid PIN NUMBER!";
        return 0;
    }
    for(int i = 0; i < 4; i++)
    {
        currentDigit=returnCharAtIndex(input,i);
        currentTask=currentDigit+i;
        if(currentTask>9)
        {
            currentTask%=10;
        }
        cout << moves[currentTask] << ", ";
        
    }
}


bool Validate(string checkThis)
{
    bool Valid=true;
    for(int i = 0; i<4;i++)
    { // I could write >='a'&&<='z', but since we haven't been taught that, I won't 
        if((checkThis[i]!='1')&&(checkThis[i]!='2')&&(checkThis[i]!='3')&&(checkThis[i]!='4')&&(checkThis[i]!='5')
        &&(checkThis[i]!='6')&&(checkThis[i]!='7')&&(checkThis[i]!='8')&&(checkThis[i]!='9')&&(checkThis[i]!='0'))
        {
            Valid=false;
        }
    }
    return Valid;
}
int returnCharAtIndex(string input, int index)
{
    int currentDigit;
    //PLEASE LET ME USE TYPE CASTING!!!
    //This can be reduced down to a single line :(
    if(input[index]=='0')
    {
        currentDigit=0;
    }
    if(input[index]=='1')
    {
        currentDigit=1;
    }
    if(input[index]=='2')
    {
        currentDigit=2;
    }
    if(input[index]=='3')
    {
        currentDigit=3;
    }
    if(input[index]=='4')
    {
        currentDigit=4;
    }
    if(input[index]=='5')
    {
        currentDigit=5;
    }
    if(input[index]=='6')
    {
        currentDigit=6;
    }
    if(input[index]=='7')
    {
        currentDigit=7;
    }
    if(input[index]=='8')
    {
        currentDigit=9;
    }
    if(input[index]=='9')
    {
        currentDigit=9;
    }

    return currentDigit;
}