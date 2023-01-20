#include <iostream>
using namespace std;

float moneyCalc(float, int);

main()
{
    int year;
    float money;
    float remMoney;

    cout << "please enter the inherited money and the year: ";
    cin >> money;
    cin >> year;

    remMoney = moneyCalc(money, year);

    if(remMoney>0)
    {
    cout << "He can live peacefully and remain with " <<  remMoney << "$";
    }
    else{
    remMoney = remMoney * -1;
    cout << "He is " <<  remMoney << "$ short";
    }
}

float moneyCalc(float money, int year)
{
    int yearMoney = 0;
    int ageMoney = 0;
    int currentAge = 19;
    float answer;

    year = year - 1800;         //translator to shift 1800 to be 0
    for(int i = 0; i<=year;i++)
    {
        yearMoney = yearMoney + 12000;
    }
    for(int i = 1; i<=year;i=i+2)
    {
        ageMoney = ageMoney + (50 * currentAge);
        currentAge = currentAge + 2;
    }

    answer = money - (ageMoney + yearMoney);
    return answer;

}