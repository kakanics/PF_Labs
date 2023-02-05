#include<iostream>
using namespace std;

main()
{
    string sentence ;
    char nonVowel[100];
    getline(cin,sentence);
    int offset = 0;

    for(int i =0; i<sentence.length();i++)
    {//please allow us implicit ascii conversion
        if(!(sentence[i]=='a'||sentence[i]=='e'||sentence[i]=='i'||sentence[i]=='o'||sentence[i]=='u'||
        sentence[i]=='A'||sentence[i]=='E'||sentence[i]=='I'||sentence[i]=='O'||sentence[i]=='U'))
        {
            nonVowel[i-offset]=sentence[i];
            nonVowel[i-offset+1]='\0';
        }
        else
        {
            offset++;
        }
    }
    cout << nonVowel;
}