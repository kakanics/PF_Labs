#include <iostream>
using namespace std;

main()
{
float charge;
int time;
float current;

cout << "Please input charge: ";
cin >> charge;

cout << "Please input time in seconds: ";
cin >> time;

current = charge / time;
cout << "The current in the wire is = " << current << " A";
}