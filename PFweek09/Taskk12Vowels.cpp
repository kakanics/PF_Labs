#include<iostream>
using namespace std;

main()
{
    string sentence;
    int count = 0;
    cout << "please enter a sentence, it can be as long as you want and contain both upper and lower case letters: "<<endl;
    getline(cin, sentence);

    for(int i = 0; i < sentence.length();i++)
    {
        if(sentence[i]=='a'||sentence[i]=='e'||sentence[i]=='i'||sentence[i]=='o'||sentence[i]=='u'||sentence[i]=='A'||sentence[i]=='E'||sentence[i]=='I'||sentence[i]=='O'||sentence[i]=='U')
        {
            count++;
        }
    }
    cout << "The number of vowels in the given sentence is: "<<count;
}