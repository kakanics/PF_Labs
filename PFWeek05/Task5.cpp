#include <iostream>

using namespace std;

int Hours(int, int);
int Minutes(int);

main()
{
    int hours;
    int minutes;
    int newHours;
    int newMinutes;

    cout << "please enter the hours: ";
    cin >> hours;
    cout << "please enter the minutes: ";
    cin >> minutes;
    
    newHours = Hours(hours,minutes);
    newMinutes = Minutes(minutes);

    cout << newHours << ":" << newMinutes;

}


int Hours(int hours, int minutes)
{
    if(minutes < 45)
    {
        return hours;
    }
    if(minutes >= 45)
    {
        if(hours < 23)
        {
            return hours+1;
        }
        if(hours == 23)
        {
            return 0;
        }
    }
    return 0;
}

int Minutes( int minutes)
{
    int nextHourMins;
    if(minutes < 45)
    {
        return minutes + 15;
    }
    if(minutes >= 45)
    {
        nextHourMins = minutes - 60 + 15;
        return nextHourMins;
    }
    return 0;
}