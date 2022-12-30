#include <iostream>
using namespace std;

void add(int number1, int number2);
void multiply(int number1, int number2);
void subtract(int number1, int number2);
void divide(int number1, int number2);

main()
{
	int num1;
	int num2;
	char op;

	cout<<"Enter a number: ";
	cin>>num1;
	cout<<"Enter a number: ";
	cin>>num2;
	cout<<"Enter a symbol (+ - * /): ";
	cin>>op;

	if(op == '+')
	{
	add(num1,num2);
	}

	if(op == '-')
	{
	subtract(num1,num2);
	}

	if(op == '*')
	{
	multiply(num1,num2);
	}

	if(op == '/')
	{
	divide(num1,num2);
	}

}

void add(int number1, int number2)
{
	int sum;
	sum = number1 + number2;
	cout << number1 << "+" << number2 << "=" <<sum<<endl<<endl;
} 

void multiply(int number1, int number2)
{
	int multiply;
	multiply = number1 * number2;
	cout << number1 << "*" << number2 << "=" <<multiply<<endl<<endl;

}

void subtract(int number1, int number2)
{
	int difference;
	difference = number1 - number2;
	cout << number1 << "-" << number2 << "=" <<difference<<endl<<endl;
} 

void divide(int number1, int number2)
{
	int div;
	div = number1 / number2;
	cout << number1 << "/" << number2 << "=" <<div<<endl<<endl;
} 