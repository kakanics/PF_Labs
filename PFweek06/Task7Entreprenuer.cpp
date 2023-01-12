#include <iostream>
using namespace std;

float checkCost(string, string, int);

main()
{
    string city;
    string product;
    float amount;
    float answer;

    cout << "Enter city, product, amount: ";
    cin >> city;
    cin >> product;
    cin >> amount;
    answer = checkCost(city, product, amount);
    cout << answer;
}

float checkCost(string city, string product, int amount)
{
    float Cost;
    if(city == "sofia")
    {
        if (product == "coffee")
        {
            Cost = amount * 0.5;
        }
        if (product == "water")
        {
            Cost = amount * 0.8;
        }
        if (product == "beer")
        {
            Cost = amount * 1.2;
        }
        if (product == "sweet")
        {
            Cost = amount * 1.45;
        }
        if (product == "peanuts")
        {
            Cost = amount * 1.60;
        }
    }
    if(city == "plovdiv")
    {
        if (product == "coffee")
        {
            Cost = amount * 0.4;
        }
        if (product == "water")
        {
            Cost = amount * 0.7;
        }
        if (product == "beer")
        {
            Cost = amount * 1.15;
        }
        if (product == "sweet")
        {
            Cost = amount * 1.30;
        }
        if (product == "peanuts")
        {
            Cost = amount * 1.50;
        }
    }
    if(city == "varna")
    {
        if (product == "coffee")
        {
            Cost = amount * 0.45;
        }
        if (product == "water")
        {
            Cost = amount * 0.70;
        }
        if (product == "beer")
        {
            Cost = amount * 1.10;
        }
        if (product == "sweet")
        {
            Cost = amount * 1.35;
        }
        if (product == "peanuts")
        {
            Cost = amount * 1.55;
        }
    }
    return Cost;

}
