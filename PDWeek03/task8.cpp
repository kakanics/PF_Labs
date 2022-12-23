#include <iostream>
using namespace std;

main(){
float unitVegPrice;
float unitFruitPrice;
int veg;
int fruit;

float vegCost;
float fruitCost;
float totalCost;
float euroCost;
float conversionRate = 1.94;

cout << "_____________________________________________"<<endl;
cout << "Enter the price per KG of vegetables: ";
cin >> unitVegPrice;
cout << "Enter the price per KG of Fruits: ";
cin >> unitFruitPrice;
cout << "Enter the total KG of vegetables bought: ";
cin >> veg;
cout << "Enter the total KG of fruits bought: ";
cin >> fruit;

vegCost = unitVegPrice * veg;
fruitCost = unitFruitPrice * fruit;

totalCost = vegCost + fruitCost;
euroCost = totalCost / conversionRate;

cout << "The total cost is " << euroCost << " Euros"<<endl; 
cout << "_____________________________________________"<<endl;
}