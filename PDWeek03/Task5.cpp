#include <iostream>
using namespace std;
main(){

int weightLoss;
int days;
cout << "_____________________________________________"<<endl;
cout << "Please enter the weight that you would like to lose: ";
cin >> weightLoss;

days = weightLoss * 15;
cout << "It will take you " << days<< " days to lose " << weightLoss << " KGs"<<endl;
cout << "_____________________________________________"<<endl;

}