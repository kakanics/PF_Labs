#include <iostream>

using namespace std;

float studioCost(string, int);
float appartmentCost(string, int);

main()
{
    string month;
    int stays;
    float stCost;
    float apCost;

    cout << "Enter months, stays: ";
    cin >> month;
    cin >> stays;


    stCost = studioCost(month, stays);
    apCost = appartmentCost(month, stays);


    cout << "Cost of staying in Appartment is: " << apCost << " $"<< endl;
    cout << "Cost of staying in studio is: " << stCost << " $"<< endl;

}


float studioCost(string month, int stays)
{
    float cost;

    if(month == "May" || month == "October")
    {
        cost = 50 * stays;
        if(stays > 7)
        {
            cost = (50 * stays) * 0.95;
        }
        if(stays > 14)
        {
            cost = (50 * stays) * 0.70;
        }
    }
    if(month == "June" || month == "September")
    {
        cost = 75.20 * stays;
        if(stays > 14)
        {
            cost = (75.20  * stays) * 0.80;
        }
    }
    if(month == "July" || month == "August")
    {
        cost = 76 * stays;
    }
    return cost;
}
float appartmentCost(string month, int stays)
{
    float cost;

    if(month == "May" || month == "October")
    {
        cost = 65 * stays;
    }
    if(month == "June" || month == "September")
    {
        cost = 68.7 * stays;
    }
    if(month == "July" || month == "August")
    {
        cost = 77 * stays;
    }
    if(stays > 14)
    {
        cost = cost * 0.9;
    }
    return cost;
}