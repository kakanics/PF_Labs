#include <iostream>

using namespace std;

float disc(string, string, float);

main()
{
    float input;
    string day;
    string month;
    float pay;

    cout << "Enter amount, enter day, enter month: \n";
    cin >> input;
    cin >> day;
    cin >> month;

    pay = disc(day, month, input);
    cout << pay;
}
float disc(string day , string month, float amount)
{
    int pay = amount;
    if(day == "Sunday" && (month == "October" || month == "March" || month == "August"))
    {
        pay = amount * 0.9;
    }
    if(day == "Monday" && (month == "November" || month == "December"))
    {
        pay = amount * 0.95;
    }
    return pay;
    
}
