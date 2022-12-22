#include <iostream>
using namespace std;

main()
{
float kgConversion = 0.45;
int PoundsIn;		
float KG;

cout << "Type the weight in pounds: ";
cin >> PoundsIn;

KG = PoundsIn * kgConversion;
cout << PoundsIn << "lbs. = " << KG << "kg";

}