#include <iostream>
using namespace std;

main()
{
    int days;             // input
    int untreatedInbound; // dailiy input

    int doctor = 7;
    int treatedPatients = 0;
    int untreatedPatients = 0;
    int treatedTempVar = 0;


    // every day untreated come and subtract doctors
    // every 3rd day compare treated and untreated and add doctor if needed
    // at the end of everyday, patients=0
    cout << "Enter the days you wanna evaluate [1-1000]";
    cin >> days;
    for (int i = 1; i <= days; i++)
    {
        if (i % 3 == 0)
        {
            if (untreatedPatients > treatedPatients)
            {
                doctor = doctor + 1;
            }
        }
        cout << "Enter the number of people that came[0-10000]: ";
        cin >> untreatedInbound;

        if (untreatedInbound >= doctor)
        {
            treatedTempVar =  doctor;
        }
        else
        {
            treatedTempVar = untreatedInbound;
        }
        treatedPatients = treatedPatients+treatedTempVar;
        untreatedPatients = untreatedPatients + (untreatedInbound - treatedTempVar);
    }
    cout << "Number of treated patients is: " << treatedPatients << endl << "Number of untreated patients is: " << untreatedPatients;
}