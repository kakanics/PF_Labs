#include <iostream>
using namespace std;

void add(int number1, int number2);

main()
{
	int num1;
	int num2;
	char op;

	cout<<"Enter a number: ";
	cin>>num1;
	cout<<"Enter a number: ";
	cin>>num2;
	cout<<"Enter a symbol (+): ";
	cin>>op;

	if(op == '+')
	{
	add(num1,num2);
	}
}

void add(int number1, int number2)
{
	int sum;
	sum = number1 + number2;
	cout << number1 << "+" << number2 << "=" <<sum<<endl<<endl;
} 