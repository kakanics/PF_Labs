#include<iostream>
using namespace std;

main()
{
    float money[4];
    float requiredMoney;
    float totalMoney;

    cout << "Enter the cost:";
    cin >> requiredMoney;

    for(int i = 0; i<4;i++)
    {
        cout << "Enter money in the required Format:";
        cin >> money[i];
    }

    totalMoney = money[0]*25+money[1]*10+money[2]*5+money[3]*1;
    totalMoney/=100;

    if(totalMoney>=requiredMoney)
    {
        cout << "You can afford the required item"; 
    }
    else
    {
        cout << "You cannot afford the item in question";
    }

}