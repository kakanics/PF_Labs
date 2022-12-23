#include <iostream>
using namespace std;
main(){

string name;
int maxMarks = 500;
float percentage;
float marks1;
float marks2;
float marks3;
float marks4;
float marks5;
cout << "_____________________________________________"<<endl;
cout<< "Please enter your name: ";
cin >> name;

cout<< "Please enter subject 1 marks: ";
cin >> marks1;
cout<< "Please enter subject 2 marks: ";
cin >> marks2;
cout<< "Please enter subject 3 marks: ";
cin >> marks3;
cout<< "Please enter subject 4 marks: ";
cin >> marks4;
cout<< "Please enter subject 5 marks: ";
cin >> marks5;

percentage = (marks1 + marks2 + marks3+ marks4+ marks5)/maxMarks;
percentage *= 100;

cout << name << ", you obtained " << percentage << "%"<<endl;
cout << "_____________________________________________"<<endl;
}