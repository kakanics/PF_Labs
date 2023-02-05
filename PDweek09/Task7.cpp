#include<iostream>
#include<cmath>
using namespace std;

main()
{
    string first;
    string second;
    char currentChar;
    int numberOfSpecificCharsInfirst = 0;
    int numberOfSpecificCharsInSecond = 0;
    int lowerCommon;
    char alphabet[28] = {"abcdefghijklmnopqrstuvwxyz "};
    int commonChar=0;

    cout << "enter first sentence: ";
    getline(cin, first);
    cout << "enter second sentence: ";
    getline(cin, second);

    for(int j = 0; j<28;j++){
        currentChar=alphabet[j];
        for(int i =0; i < first.length()&&i < second.length();i++)
        {
            if(currentChar==first[i])
            {
                numberOfSpecificCharsInfirst++;
            }
            if(currentChar==second[i])
            {
                numberOfSpecificCharsInSecond++;
            }
        }
        lowerCommon = min(numberOfSpecificCharsInfirst, numberOfSpecificCharsInSecond);
        numberOfSpecificCharsInfirst = 0;
        numberOfSpecificCharsInSecond = 0;
        commonChar+=lowerCommon;

    }

    cout << commonChar;

}