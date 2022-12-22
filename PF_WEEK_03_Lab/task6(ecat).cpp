#include <iostream>
using namespace std;

main()
{	
string CodeBeautifier = "-----------------------------------------------";
string name;
float MatricMarks;
float IntermediateMarks;
float ecatMarks;
float matricPercent;
float IntermediatePercent;
float ecatPercent;
float matricWeight;
float fscWeight;
float ecatWeight;
float aggregate;

cout << CodeBeautifier << endl;
cout << "Please enter you name: ";
cin >> name;

cout << "Enter Matric marks (out of 1100): ";
cin >> MatricMarks;
cout << "Enter intermediate marks (out of 550): ";
cin >> IntermediateMarks;
cout << "Enter ecat marks (out of 400): ";
cin >>ecatMarks;

matricPercent = (MatricMarks/1100)*100;
ecatPercent   = (ecatMarks/400)*100;
IntermediatePercent = (IntermediateMarks/550)*100;

matricWeight = matricPercent * 0.1;
ecatWeight = ecatPercent * 0.5;
fscWeight = IntermediatePercent * 0.4;

aggregate = matricWeight + ecatWeight+ fscWeight;

cout <<endl<< name << ", your aggregate is: "<< aggregate<<endl;
cout << CodeBeautifier << endl;

}