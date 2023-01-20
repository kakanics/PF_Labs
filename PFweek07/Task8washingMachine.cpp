// age input
//even years gets 10USD + 10income
//odd years gets toys
//each even year loses 1USD

#include <iostream>
using namespace std;

float calcMoney(int, int, float);

main()
{
    int age;
    int toysPrice;
    float machinePrice;
    float money;

    cout << "please enter age, machine price and toys price: ";

    cin >> age;
    cin >> machinePrice;
    cin >> toysPrice;

    money = calcMoney(age, toysPrice, machinePrice);                

    //evaluate the answer
    if(money >= 0)
    {
    cout << "She can buy the washing machine with " <<  money <<  " $ remaining";
    }
    else
    {
    money = money * -1;
    cout << "She is " <<  money <<  " $ short";
    }

}

float calcMoney(int age, int toysPrice, float machinePrice)
{
    float answer;
    int giftMoney = 0;
    int toysMoney = 0;

    for(int i =2; i<=age;i=i+2)       //age*5 is the amount of money she receives for a given birthday (checked mathematically)
    {
        giftMoney = giftMoney + i * 5;
        giftMoney-= 1;
    }


    for(int i = 1; i <=age;i=i+2)       //iterative approach for calculating toys money
    {
        toysMoney = toysMoney + toysPrice;
    }

    answer = (giftMoney+toysMoney)-machinePrice;
    return answer;
}
