#include<iostream>
#include<cmath>

using namespace std;

bool isSymmetric(int);

main()
{
	int n1;
	cin >> n1;

	bool isTrue;
	isTrue = isSymmetric(n1);
	
	if(isTrue == true)
	{
	cout << "Symmetric"; 
	}

	if(isTrue == false)
	{
	cout << "Not Symmetric"; 
	}
}

bool isSymmetric(int x)
{
	int firstDigit;
	int lastDigit;

	firstDigit = x/100;
	lastDigit = x%10;

	if (firstDigit == lastDigit)
		{
		return true;
		}
	return false;

}
