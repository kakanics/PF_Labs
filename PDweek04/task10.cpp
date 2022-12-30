#include <iostream>
#include <windows.h>
using namespace std;

void priceEvaluate(string country, int price);

main()
{
	system("cls");
	string country;
	int price;

	while(true)
	{
		cout << "Please enter a country \"Pakistan\", \"Ireland\", \"India\", \"England\", \"Canada\": ";
		cin >>country;
		cout << "Please enter the price in dollars: ";
		cin >> price;

		priceEvaluate(country, price);
	}
}


void priceEvaluate(string country, int price)
{
int resultingCost;

	if(country == "Pakistan")
	{
		resultingCost = price * 0.95;
	}

	if(country == "Ireland")
	{
		resultingCost = price * 0.9;
	}

	if(country == "India")
	{
		resultingCost = price * 0.8;
	}

	if(country == "England")
	{
		resultingCost = price * 0.7;
	}

	if(country == "Canada")
	{
		resultingCost = price * 0.55;
	}
	cout << resultingCost << "$" << endl;
}