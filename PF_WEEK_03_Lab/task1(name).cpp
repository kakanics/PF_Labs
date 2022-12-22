#include <iostream>
using namespace std;

main()
{
string name;
int rollNo;
float aggregate;
char section;

cout << "-------------------------------------------"<<endl;;
cout << "Enter your Name: ";
cin >> name;

cout << "Enter your roll number: ";
cin >> rollNo;

cout << "Enter your Aggregate: ";
cin >> aggregate;

cout << "Enter your Section: ";
cin >> section;
cout << endl << endl;


cout << "Your name is "        << name    << endl;
cout << "Your roll number is " << rollNo  << endl;
cout << "Your Section is "     << section << endl;
cout << "Your aggregate is "   <<aggregate<< endl;
cout << "-------------------------------------------";

}