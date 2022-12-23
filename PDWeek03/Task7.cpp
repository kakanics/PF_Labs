#include <iostream>
using namespace std;
main(){
string movieName;
int childTicketCost;
int adultTicketCost;
int adultTicketsSold;
int childTicketsSold;
int donationPercent;
int totalMoney;
int donation;
int netGain;

cout << "_____________________________________________"<<endl;
cout << "Please enter the name of the movie: ";
cin >> movieName;
cout << "Please enter the cost of child ticket: ";
cin >> childTicketCost;
cout << "Please enter the cost of adult ticket: ";
cin >> adultTicketCost;
cout << "Please enter the number of adult ticket sold: ";
cin >> adultTicketsSold;
cout << "Please enter the number of child ticket sold: ";
cin >> childTicketsSold;
cout << "Please enter the percentage of money to be donated to charity: ";
cin >> donation;

totalMoney = (childTicketsSold * childTicketCost) + (adultTicketCost * adultTicketsSold);
donation = (totalMoney * donation)/100;
netGain = totalMoney - donation;
cout << "_____________________________________________"<<endl;
cout<<movieName << " made " << totalMoney << "$"<<endl;
cout<<movieName << " made " << netGain << "$ after donaion"<<endl;
cout << "_____________________________________________"<<endl;

}