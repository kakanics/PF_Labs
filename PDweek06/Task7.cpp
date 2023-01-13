#include <iostream>

using namespace std;

void late(int, int);
void onTime(int, int);
void early(int, int);

main()
{
    int startingHours;  //PAST FORM OF VERB VARIABLES ARE USED FOR INPUTS
    int startingMin;
    int arrivedHours;
    int arrivedMin;
    int startingMins; //converts Hours into minutes cuz I don't wanna deal with 4 variables comparison for time 
    int arrivalMins;  // comparing 2 variables is easier than comparing 2 variables... -Affan
    int minutes; //This will tell whether student is late or not

    cout << "Enter starting hour, mins, arrival hour, mins: ";
    cin >> startingHours;
    cin >> startingMin;
    cin >> arrivedHours;
    cin >> arrivedMin;

    startingMins = (startingHours*60)+startingMin;
    arrivalMins = (arrivedHours*60)+arrivedMin;


    //Calls different functions based on status of student
    if(arrivalMins > startingMins)
    {
        late(startingMins, arrivalMins);
    }
    else if(startingMins - arrivalMins <= 30)
    {
        onTime(startingMins, arrivalMins);
    }
    else if(arrivalMins < startingMins)
    {
        early(startingMins, arrivalMins);
    }
 
}

void late(int stMins, int arMins)
{
    int lateInMins;

    lateInMins = arMins-stMins;
    cout << "Late" << endl;
    if (lateInMins % 60 > 9)
    {
        cout << "late by: " << lateInMins / 60 << " : " << lateInMins % 60 << " hours";
    }
    else 
    {
        cout << "late by: " << lateInMins / 60 << " : 0" << lateInMins % 60 << " hours";
    }
}

void onTime(int stMins, int arMins)
{
    int mins;

    mins = stMins-arMins;

    cout << "On time" << endl;
    if(mins !=0)
    {
        cout << "You are on time by: " << mins << " Minutes";
    }
}

void early(int stMins, int arMins)
{
    int mins;

    mins = stMins-arMins;

    cout << "Early"<< endl;
    if (mins % 60 > 9)
    {
        cout << "You are early by: " << mins / 60 << " : " << mins % 60 << " hours";
    }
    else 
    {
        cout << "You are early by: " << mins / 60 << " : " << mins % 60 << " hours";
    }
    
}
