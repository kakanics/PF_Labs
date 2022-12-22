#include <iostream>
using namespace std;

main()
{
float dollarValue = 226.58;
int dollarsIn;
float Ruppees;
cout << "Please input the amount of dollars: ";
cin >> dollarsIn;
Ruppees = dollarsIn * dollarValue;
cout << dollarsIn << "$= " << Ruppees << "RS"<<endl;

}