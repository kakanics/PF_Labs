#include <iostream>
using namespace std;
main(){

float cost;
float weight;
float area;

float unitCost;
float unitAreaCost;
cout << "_____________________________________________"<<endl;
cout << "Enter the bag size in pounds: ";
cin >> weight;
cout << "Enter the bag cost: ";
cin >> cost;
cout << "Enter the area covered: ";
cin >> area;

unitCost = cost/weight;
unitAreaCost = cost/area;

cout << "_____________________________________________"<<endl;
cout << "Cost of fertilizer per pound is: "<< unitCost<<endl;
cout << "Cost of fertilizer per square foot is: "<< unitAreaCost<<endl;
cout << "_____________________________________________"<<endl;

}