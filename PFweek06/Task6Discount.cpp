#include <iostream>
#include <math.h>
using namespace std;

float lowPrice(string, int);

main()
{
    int dist;
    string time;
    float price;

    cin >> dist;
    cin >> time;

    price = lowPrice(time, dist);
    cout << price;
}

float lowPrice(string time, int distance) //Will not fail on any edge cases even if taxi fares etc are changed because min function is used
{
    float taxiPrice = 0;
    float busPrice = 0;
    float trainPrice = 0;
    float minPrice;

    if(time == "day")
    {
        taxiPrice = 0.7 + 0.79*distance;
        if(distance < 20)
        {return taxiPrice;}
    }
    if(time == "night")
    {
        taxiPrice = 0.7 + 0.9*distance;
        if(distance < 20)
        {return taxiPrice;}
    }
    if(distance > 20)
    {
        busPrice = distance * 0.09;
    }
    if(distance > 100)
    {
        trainPrice = distance * 0.06;
    }
    
    minPrice = min(taxiPrice, busPrice);
    if(distance > 100){
    minPrice = min(minPrice, trainPrice);}
    return minPrice;

}
