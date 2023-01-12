#include <iostream>
using namespace std;

float income(string, int, int);

main()
{
    string type;
    int rows;
    int height;
    float totalIncome;

    cout << "Enter type, rows, height; ";
    cin >> type;
    cin >> rows;
    cin >> height;

    totalIncome = income(type, rows, height);
    cout << totalIncome << " EU";
}
float income(string type, int rows, int height)
{
    float answer;
    if(type == "Premiere")
    {
        answer = rows * height * 12;
    }
    if(type == "Normal")
    {
        answer = rows * height * 7.5;
    }
    if(type == "Discount")
    {
        answer = rows * height * 5;
    }
    return answer;
}
