#include <iostream>
using namespace std;


string movieArr[5]={"gladiator", "starwars", "terminator", "takinglives", "tombraider"};
int priceCalc(string);

main()
{
    string movie;
    int totalPrice = 0;
    
        cout << "Enter name of movie: ";
        cin >> movie;
        totalPrice = priceCalc(movie);
        if(totalPrice==-1)
        {
            cout << "Enter a valid movie" << endl;
            return 0;
        }
    cout << "The ticket costs: ";
    cout << totalPrice;
}

int priceCalc(string movie)
{
    float cost = -1;
    for(int i = 0; i <5;i++)
    {
        if(movie==movieArr[i])
        {
            if(i%2==0)
            {
                cost = 475;
            }
            else
            {
                cost = 450;
            }
        }
    }
    return cost;
}