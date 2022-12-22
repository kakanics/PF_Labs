#include <iostream>
using namespace std;

main()
{
float kgConversion = 0.45;
float kgIn;		
float pounds;

cout << "Type the weight in kgs: ";
cin >> kgIn;

pounds = kgIn / kgConversion;
cout << kgIn << "kg = " << pounds << "lbs.";

}