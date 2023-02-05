#include<iostream>
using namespace std;

main()
{
    string input = "test";
    string something = "something ";

    cout << "please enter a sentence:";
    getline(cin,input);


    char merged[1000];
    for(int i = 0; i < (something.length()+input.length());i++)
    {
        if(i<=9)
        {merged[i]=something[i];}
        else{
            merged[i]=input[i-10];
            merged[i+1]='\0';
        }
    }
    for(int i = 0; i < something.length()+input.length();i++)
    {
        cout << merged[i];
    }
}