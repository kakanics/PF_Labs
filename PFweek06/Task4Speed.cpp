#include <iostream>
using namespace std;

string chkSpeed(float);

main()
{
    float speed;
    string speedText;
    cin >> speed;

    speedText = chkSpeed(speed);
    cout << speedText;
}

string chkSpeed(float speed)
{
    string answer;
    if(speed> 0 && speed <= 10)
    {
        answer = "Slow";
    }
    else if (speed <= 50)
    {
        answer = "Average";
    }
    else if (speed <= 150)
    {
        answer = "Fast";
    }
    else if (speed <= 1000)
    {
        answer = "Ultra-Fast";
    }
    else if (speed > 1000)
    {
        answer = "Extremely Fast";
    }
    return answer;
}
