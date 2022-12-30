#include <iostream>
#include <windows.h>
using namespace std;

void reverse(string input);

main()
{
	system("cls");
	string TFValue;
	cout << "please type \"TRUE\" or \"FALSE\": ";
	cin  >> TFValue;
	reverse(TFValue);
}

void reverse(string input)
{
	if(input == "TRUE")
	{
	cout << "false";
	}

	if(input == "FALSE")
	{
	cout << "true";
	}

	if(input != "FALSE" && input != "TRUE")
	{
	cout << "error 404: input case not found in database"<<endl<<"please learn to type lol";
	}
} 