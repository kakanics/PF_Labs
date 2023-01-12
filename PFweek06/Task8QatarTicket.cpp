#include <iostream>
using namespace std;

float evaluate(int, string, int);

main()
{
    int budget;
    int people;
    string type;
    float rem;

    cout << "Please enter the budget, ticket type, number of people: ";
    cin >> budget;
    cin >> type;
    cin >> people;
    rem = evaluate(budget, type, people);

    if(rem >= 0)
    {
        cout << "You can go, and will be left with " << rem << " QR" << endl;
    }
    else
    {
        cout << "You can't go, you are " << -1*rem << " QR short" << endl;
    }

}


float evaluate(int budget, string type, int people)
{
    float remAmount;

    if(people>0 && people < 5)                  // SUBTRACT TRANSPORT COST
    {
        remAmount = budget * 0.25;
    }
    else if(people <= 10)
    {
        remAmount = budget * 0.4;
    }
    else if(people <= 25)
    {
        remAmount = budget * 0.5;
    }
    else if(people <= 50)
    {
        remAmount = budget * 0.6;
    }
    else if(people > 50)
    {
        remAmount = budget * 0.75;
    }


    if(type == "VIP")                       //CALCULATE TICKET PRICE
    {
        remAmount = remAmount - 499.99*people;
    }
    if(type == "normal")
    {
        remAmount = remAmount - 249.99*people;
    }
    return remAmount;
}