#include <iostream>

using namespace std;

float costCalc(string, string, float);

main()
{
    string fruit;
    string day;
    float amountToBuy;
    float cost = 0;

    cout << "Enter fruit, day, amount to buy: ";
    cin >> fruit;
    cin >> day;
    cin >> amountToBuy;

    if(amountToBuy > 0 && (day == "Monday" || day == "Tuesday"|| day == "Wednesday" || day == "Thursday"|| day == "Friday" || day == "Sunday" || day == "Saturday")
    && (fruit == "banana" || fruit == "apple" || fruit == "orange" || fruit == "grapefruit" || fruit == "kiwi" || fruit == "pineapples" || fruit == "grapes"))
    {
        cost = costCalc(fruit, day, amountToBuy);
        cout << cost;
    }
    else 
    {
        cout << "Invalid Input";
    }
}

float costCalc(string fruit, string day, float number)
{
    float cost;

    if(day == "Monday" || day == "Tuesday"|| day == "Wednesday" || day == "Thursday"|| day == "Friday" )
    {
        if(fruit == "banana")
        {
            cost = number * 2.5;
        }
        else if(fruit == "apple")
        {
            cost = number * 1.2;
        }
        else if(fruit == "orange")
        {
            cost = number * 0.85;
        }
        else if(fruit == "grapefruit")
        {
            cost = number * 1.45;
        }
        else if(fruit == "kiwi")
        {
            cost = number * 2.70;
        }
        else if(fruit == "pineapples")
        {
            cost = number * 5.50;
        }
        else if(fruit == "grapes")
        {
            cost = number * 3.85;
        }
    }
    if(day == "Sunday" || day == "Saturday")
    {
        if(fruit == "banana")
        {
            cost = number * 2.7;
        }
        else if(fruit == "apple")
        {
            cost = number * 1.25;
        }
        else if(fruit == "orange")
        {
            cost = number * 0.9;
        }
        else if(fruit == "grapefruit")
        {
            cost = number * 1.60;
        }
        else if(fruit == "kiwi")
        {
            cost = number * 3.0;
        }
        else if(fruit == "pineapples")
        {
            cost = number * 5.60;
        }
        else if(fruit == "grapes")
        {
            cost = number * 4.20;
        }
    }
    return cost;
}