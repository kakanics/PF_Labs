#include <iostream>
#include <cmath>

using namespace std;

int Volumecalculator(int, int, int, float);
int PercentageCalculator(float, float);

main()
{
    int volume;
    int pipe1;
    int pipe2;
    float hoursAway;
    int Filled;
    int percenFilled;
    int pipe1Vol;
    int pipe2Vol;
    int OverFlow = 0;
    float TimeToFill;
    float volumeFloat;

    cout << "Please enter the volume of the pool: ";
    cin >> volume;
    cout << "Please enter the flow-rate of the first pipe: ";
    cin >> pipe1;
    cout << "Please enter the flow-rate of the second pipe: ";
    cin >> pipe2;
    cout << "Please enter the hours that he was away: ";
    cin >> hoursAway;

    pipe1Vol = pipe1*hoursAway;
    pipe2Vol = pipe2*hoursAway;

    Filled = Volumecalculator(volume, pipe1,pipe2, hoursAway);
    pipe1Vol = PercentageCalculator(pipe1Vol, Filled);
    pipe2Vol = PercentageCalculator(pipe2Vol, Filled);
    percenFilled = PercentageCalculator(Filled, volume);

    if(Filled > volume){
        OverFlow = Filled - volume;
        volumeFloat = volume;
        TimeToFill = volumeFloat/(pipe1+pipe2);   
    }

    if(OverFlow==0)
    {
    cout << "The pool has filled: "<<Filled << " Liters" << endl << "so, it is "<<percenFilled << "% filled" << endl;
    cout << "Pipe 1 contributed " << pipe1Vol << "%" << endl ;
    cout << "Pipe 2 contributed " << pipe2Vol << "%" ;
    }

    if(OverFlow!=0)
    {
        cout << "Water was wasted: " << OverFlow << " liters"<< endl << "Pipe 2 contributed " <<  pipe2Vol << "%" << endl << "The pool filled in " << TimeToFill << "hours";
    }

}

int Volumecalculator(int volume, int pipe1, int pipe2, float hoursAway)
{
    int liters1;
    int liters2;
    int fillLevel;

    liters1 = pipe1 * hoursAway;
    liters2 = pipe2 * hoursAway;

    fillLevel = liters1+liters2;
    return fillLevel;
}
int PercentageCalculator(float ob, float total)
{
    float percentage;
    percentage = ob/total;
    percentage = percentage * 100;
    percentage = floor(percentage);
    return percentage;
}
