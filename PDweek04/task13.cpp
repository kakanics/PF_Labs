#include <iostream>
#include <windows.h>
using namespace std;

void evaluate(int Holidays);

main()
{
	system("cls");
	int holidays;

	cout << "Please input the number of Holidays days: ";
	cin >> holidays;

	evaluate(holidays);
}

void evaluate(int Holidays)
{
	int workingDays;
	int minutesToPlay;
	int minutesToSleep;

	workingDays = 365 - Holidays;
	minutesToPlay = (Holidays * 127) + (workingDays * 63);
	minutesToSleep = 30000 - minutesToPlay;

	if(minutesToSleep >= 0)
	{
	cout << "Tom sleeps well"<<endl;
	cout << "Tom will sleep for "<<minutesToSleep/60<<" hours " << minutesToSleep%60 << " minutes"; 
	}

	
	if(minutesToSleep < 0)
	{
	cout << "Tom will run away"<<endl;
	minutesToSleep = minutesToSleep * -1;
	cout << "Tom will play extra for "<<minutesToSleep/60<<" hours " << minutesToSleep%60 << " minutes";
	}
}