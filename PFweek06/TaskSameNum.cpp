#include <iostream>
using namespace std;

bool isSim(int, int, int);

main()
{
    int num1, num2, num3;
    bool isSimilar;

    cout << "Enter 3 numbers: ";
    cin >> num1;
    cin >> num2;
    cin >> num3;

    isSimilar = isSim(num1, num2, num3);
    if(isSimilar){cout << "Yes";}
    else{cout << "No";}

}

bool isSim(int num1, int num2, int num3)
{
    if(num1 == num2 && num2 == num3)
    {
        return true;
    }
    return false;
}
