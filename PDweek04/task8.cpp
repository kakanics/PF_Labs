#include <iostream>
#include <windows.h>
using namespace std;

void equalChecker(int num1, int num2);

main()
{
	system("cls");
	int num1;
	int num2;

	cout << "Please enter a number: ";
	cin >> num1;
	
	cout << "Please enter a number: ";
	cin >> num2;

	equalChecker(num1,num2);
}


void equalChecker(int num1, int num2)
{
	if(num1==num2)
	{
	cout << "TRUE!!!"; 
	}

	
	if(num1!=num2)
	{
	cout << "FALSE!!!"; 
	}
}