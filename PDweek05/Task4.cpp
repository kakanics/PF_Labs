#include <iostream>

using namespace std;

int requiredTime(int givenDays, int workers);

main()
{
    int hoursNeeded;
    int givenDays;
    int workers;
    int reqHours;


    cout << "Please enter the hours that are needed: ";
    cin >> hoursNeeded;
    cout << "Please enter the days that the firm has: ";
    cin >> givenDays;
    cout << "Please enter the hours that are needed: ";
    cin >> workers;

    reqHours = requiredTime(givenDays, workers);

    if(reqHours < hoursNeeded)
    {
        cout << "The project will not be completed, more time is needed: " << hoursNeeded - reqHours<<endl;
    }
    if(reqHours > hoursNeeded)
    {
        cout << "The project will be completed, extra time is: " << reqHours - hoursNeeded;
    }
}

int requiredTime(int givenDays, int workers)
{
    int workingDays;
    int workingHoursTotal;
    int workingHoursPerson;

    workingHoursPerson = givenDays * 10;
    workingDays = workingHoursPerson*0.9;
    workingHoursTotal = workingDays*workers;
    return workingHoursTotal;
}