#include<iostream>
using namespace std;

main()
{
    string convertor =  "abcdefghijklmnopqrstuvwxyz";
    string input;
    cin >> input;

    for(int i = 0; i < input.length();i++)
    {
        for(int j = 0; j<convertor.length();j++)
        {
            if(input[i]==convertor[j])
            {
                if(j<25)
                {
                    input[i]=convertor[j+1];
                }
                else 
                { 
                    input[i]='a';
                }
                break;
            }
        }
    }
    cout << input;
}