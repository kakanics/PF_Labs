#include <iostream>
using namespace std;

main(){
int input;
int digit1;
int digit2;
int digit3;
int digit4;
int sum;
cout << "_____________________________________________"<<endl;
cout << "Enter a 4-digit number: ";
cin >> input;

digit1 = input/1000;
digit2 = (input/100)%10;
digit3 = (input%100)/10;
digit4 = input%10;

sum = digit1 + digit2 + digit3+ digit4;
cout << sum<<endl;
cout << "_____________________________________________"<<endl;

}