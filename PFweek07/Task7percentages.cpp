//input n
//take n numbers
//p1 = pec 0-200
//p2 = pec 200-400
//....
//p1 = pec 0-200

#include <iostream>
#include<cmath>
using namespace std;

void printPercentage(float number, float total);

main()
{
    int n;
    int input;
    int range02 = 0;        //format rangeXY = range X00 - Y00.. eg range46 = range 400-600
    int range24 = 0;
    int range46 = 0;
    int range68 = 0;
    int range810 = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        if(input > 0 && input < 200)
        {
            range02 += 1;
        }
        else if(input < 400)
        {
            range24 += 1;
        }
        else if(input < 600)
        {
            range46 += 1;
        }
        else if(input < 800)
        {
            range68 += 1;
        }
        else if(input < 1001)
        {
            range810 += 1;
        }
    }
    cout << endl;
    printPercentage(range02,n);
    printPercentage(range24,n);
    printPercentage(range46,n);
    printPercentage(range68,n);
    printPercentage(range810,n);
}


void printPercentage(float number, float total)
{
    float percentage;
    percentage = (number / total)*100;
    percentage*=100;
    percentage = ceil(percentage);
    percentage/=100;

    cout << percentage <<"%"<< endl;
}