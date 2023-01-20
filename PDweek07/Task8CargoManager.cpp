#include <iostream>
using namespace std;

main()
{
    int input;
    int ton;
    int totalTon = 0;

    float busTon = 0;
    float truckTon = 0;
    float trainTon = 0;

    float busPrice;
    float truckPrice;
    float TrainPrice;
    float totalPrice;
    int TempAvg; //For rounding
    float averagePrice;

    float percentageBus;
    float percentageTruck;
    float percentageTrain;

    cout << "enter a number[1-1000]: ";
    cin >> input;

    for(int i = 1; i <= input; i++)                 //calculate bus, truck, train etc
    {
        cout << "Enter a number[1-1000]: ";
        cin >> ton;
        totalTon += ton;

        if(ton<=3)
        {
            busTon += ton;
        }
        else if(ton<=11)
        {
            truckTon+=ton;
        }
        else
        {
            trainTon+=ton;
        }
    }

    busPrice = busTon*200;                  //Prices
    truckPrice = truckTon*175;
    TrainPrice = trainTon*120;
    totalPrice = busPrice+truckPrice+TrainPrice;
    
    percentageBus = busTon/totalTon*100;        //Percentages
    percentageTruck = truckTon/totalTon*100;
    percentageTrain = trainTon/totalTon*100;

    TempAvg =(totalPrice/totalTon*100);     //for rounding upto 2 decimal places
    averagePrice = TempAvg/100.0;

    cout << "Average price is: " << averagePrice  << endl << percentageBus << "% by bus" << endl<< percentageTruck << "% by Truck"<< endl<< percentageTrain << "% by Train" << endl;

}