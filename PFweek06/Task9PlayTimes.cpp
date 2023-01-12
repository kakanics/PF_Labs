#include <iostream>
using namespace std;

int playedTimes(string, int, int);

main()
{
    string type; // year type
    int holidays;
    int weekendReturn;
    int timesPlayed;

    cout << "Enter the type of year, number of holidays and number of holidays that vlad returns to his hometown: ";
    cin >> type;
    cin >> holidays;
    cin >> weekendReturn;

    timesPlayed = playedTimes(type, holidays, weekendReturn);
    cout << timesPlayed;
}

int playedTimes(string type, int holidays, int weekendReturn)   //weekendreturn is weekends where vlad returns ----- holidays are holidays that are not satur and sun
{
    float answer;
    float holidayPlayTime;

    answer = 48 - weekendReturn;
    answer = answer * 0.75;

    holidayPlayTime = holidays * 0.6666;
    
    answer = answer + holidayPlayTime + weekendReturn;
    if(type == "leap"){answer = answer * 1.15;}
    return answer;

}
