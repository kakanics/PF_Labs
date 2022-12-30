#include <iostream>
using namespace std;

void calculateBill(string day, int amount);

main()
{
	string day;
	int amount;

	while(true)
	{
		cout<< "Enter current day in lowercase without spaces (eg. monday): ";
		cin >> day;
		cout<< "Enter the cost of goods: ";
		cin >>amount;
		calculateBill(day,amount);
	}
}

void calculateBill(string day, int amount)
{
	int payableAmount;
	if(day == "sunday")
	{
		payableAmount = amount * 0.9;
	}
	if(day != "sunday")
	{
		payableAmount = amount;
	}
	cout <<"Total amount to pay is: "<< payableAmount << endl;
}