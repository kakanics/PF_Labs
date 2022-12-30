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
	if(day == "monday")
	{
		payableAmount = amount * 0.95;
	}
	if(day == "tuesday")
	{
		payableAmount = amount * 0.95;
	}
	if(day == "wednesday")
	{
		payableAmount = amount * 0.95;
	}
	if(day == "thursday")
	{
		payableAmount = amount * 0.95;
	}
	if(day == "friday")
	{
		payableAmount = amount * 0.95;
	}
	if(day == "saturday")
	{
		payableAmount = amount * 0.95;
	}
	cout <<"Total amount to pay is: "<< payableAmount << endl;
}