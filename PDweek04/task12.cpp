#include <iostream>
#include <windows.h>
using namespace std;

void Evaluator(int rRose, int wRose, int tulips);

main()
{
	system("cls");
	int rRose;
	int wRose;
	int tulips;

	cout << "Please enter number of red roses: ";
	cin >> rRose;
	cout << "Please enter number of white roses: ";
	cin >> wRose;
	cout << "Please enter number of tulips: ";
	cin >> tulips;
	Evaluator(rRose, wRose, tulips);
}

void Evaluator(int rRose, int wRose, int tulips)
{
	int totalprice = 0;
	int adjustedPrice;
	totalprice = rRose * 2.0;
	totalprice = totalprice + (wRose * 4.1);
	totalprice = totalprice + (tulips * 2.5);


	adjustedPrice = totalprice;
	if(totalprice>200)
	{
	adjustedPrice = totalprice * 0.8;
	}
	cout << "Total cost is: " << totalprice<<endl;
	cout << "Adjusted cost is: "<< adjustedPrice<<endl;
	
}
