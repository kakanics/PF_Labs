#include <iostream>
using namespace std;

main()
{
    int input;
    int num;

    float div2 = 0;
    float div3 = 0;
    float div4 = 0;

    float percentage2;
    float percentage3;
    float percentage4;

    cout << "enter a number[1-1000]: ";
    cin >> input;

    for(int i = 1; i <= input; i++)
    {
        cout << "Enter a number[1-1000]: ";
        cin >> num;

        if(num%2==0)
        {
            div2++;
        }
        if(num%3==0)
        {
            div3++;
        }
        if(num%4==0)
        {
            div4++;
        }
    }

    percentage2 = (div2/input)*100;
    percentage3 = (div3/input)*100;
    percentage4 = (div4/input)*100;

    cout << percentage2 << "% are divisible by 2" << endl <<  percentage3 << "% are divisible by 3" << endl << percentage4 << "% are divisible by 4" << endl;
}