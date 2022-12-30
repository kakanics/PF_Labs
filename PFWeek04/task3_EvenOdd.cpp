#include <iostream>
using namespace std;

void isEven(int number);

main()
{
	int input;
	while(true)
	{
	cout << "Enter a number: ";
	cin >> input;
	isEven(input);
	}
}

void isEven(int number)
{
	if(number%2 == 0)
	{
	cout << "Given number is even"<<endl;
	}

	if(number%2 != 0)
	{
	cout << "Given number is odd"<<endl;
	}

	
}