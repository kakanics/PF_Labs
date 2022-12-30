#include <iostream>
#include <windows.h>
using namespace std;

void evaluator(int speed);

main()
{
	system("cls");
	int speed;

	cout << "Please enter the speed of car in (km/h): ";
	cin >> speed;
	evaluator(speed);
}


void evaluator(int speed)
{
	if(speed > 100)
	{
	cout << "HALT... IT IS TIME FOR YOU TO BE CHALLENGED AND BE KILLED FOR YOUR CRIMES";
	}
	if(speed <= 100)
	{
	cout << "Keep going bro, you are doing good :) ";
	}
}