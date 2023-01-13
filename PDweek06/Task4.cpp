#include <iostream>
using namespace std;

float priceCalc(char time, int minutes);

main()
{
    char service;
    int minutes;
    float price;

    cout << "Enter service and minutes that you use the service for: ";
    cin >> service;
    cin >> minutes;

    price = priceCalc(service, minutes);
    if(price != 0)
    {
        cout << price << " $";
    } else {cout << "Invalid input";}
}

float priceCalc(char service, int minutes)
{
    float price = 0;
    char time;


    if(service == 'r' || service == 'R')
    {
        if(minutes < 50)
        {
            price = 10;
        }
        else
        {
            price = 10 + (minutes - 50)*0.20;
        }
    }
    
    if(service == 'p' || service == 'P')
    {
        cout << "Please enter the time: ";
        cin >> time;
        if(time == 'd' || time == 'D')
        {
            minutes = minutes - 75;
            price = 25+minutes * 0.1;
            if(minutes < 0)
            {
                price = 25;
            }
        }
        if(time == 'n' || time == 'N')
        {
            minutes = minutes - 100;
            price = 25 + minutes * 0.05;
            if(minutes < 0)
            {
                price = 25;
            }
        }
    }


    return price;

}
