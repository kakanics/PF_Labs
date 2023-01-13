#include <iostream>
using namespace std;

string doThis(string, string);

main()
{
    string temperature;
    string humidity;
    string task;

    cout << "Enter temperature, humidity: ";
    cin >> temperature;
    cin >> humidity;

    task = doThis(temperature, humidity);
    cout << task;

}

string doThis(string temperature, string humidity)
{
    string answer = "Default";

    if(temperature == "warm")
    {
        if (humidity == "dry")
        {
            answer = "Play tennis";
        }
        if (humidity == "humid")
        {
            answer = "Swim";
        }
    }
    if(temperature == "cold")
    {
        if (humidity == "dry")
        {
            answer = "Play basketball";
        }
        if (humidity == "humid")
        {
            answer = "Watch TV";
        }
    }
    return answer;
}