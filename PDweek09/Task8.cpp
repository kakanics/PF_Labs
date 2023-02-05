#include<iostream>
using namespace std;

main()
{
    string pencils[100];
    bool morePencils = true;
    int i = 0;  //i for iterator
    int time;

    while(morePencils)
    {
        cout << "Enter a color: ";
        cin >> pencils[i];
        if(i!=0&&!(pencils[i]==pencils[i-1]))
        {
            time+=1;
        }
        i++;
        time+=2;
        cout << "press 1 if you want to enter another color: ";
        cin >> morePencils;
    }
    time += 2;
    cout << time << " seconds to paint the entire grid of squares or whatever the heck you want to pain";
}