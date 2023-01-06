#include <iostream>

using namespace std;

float taxCalculator(char type, float price);

main()
{
    float price;
    float tax;
    float finalPrice;
    char vehicleC;
    string vehicle;

    cout << "Please enter the price of vehicle: ";
    cin >> price;
    cout << "Please enter the type of vehicle (M, E, S, V, T): ";
    cin >> vehicleC;

    tax = taxCalculator(vehicleC, price);
    finalPrice = tax + price;
    
    if(vehicleC == 'M')
    {
        vehicle = "Motorcycle";
    }
    if(vehicleC == 'S')
    {
        vehicle = "Sedan";
    }
    if(vehicleC == 'V')
    {
        vehicle = "Van";
    }
    if(vehicleC == 'E')
    {
        vehicle = "Electric";
    }
    if(vehicleC == 'T')
    {
        vehicle = "Truck";
    }

    cout << "The final price of the vehicle " << vehicle << " after adding tax is: $" << finalPrice;

}

float taxCalculator(char type, float price)
{
    float taxAmount;
    if(type == 'M')
    {
        taxAmount = price * 6.0 / 100;
        return taxAmount;
    }
    if(type == 'E')
    {
        taxAmount = price * 8.0 / 100;
        return taxAmount;
    }
    if(type == 'S')
    {
        taxAmount = price * 10.0 / 100;
        return taxAmount;
    }
    if(type == 'V')
    {
        taxAmount = price * 12.0 / 100;
        return taxAmount;
    }
    if(type == 'T')
    {
        taxAmount = price * 15.0 / 100;
        return taxAmount;
    }
}