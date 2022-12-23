#include <iostream>
using namespace std;
main(){
float acceleration;
float initialVel;
float finalVel;
float time;
float accTimeProduct;
cout << "_____________________________________________"<<endl;
cout<<"Please enter ACCELERATION of the car: ";
cin>>acceleration;
cout<<"Please enter INITIAL VELOCITY of the car: ";
cin>>initialVel;
cout<<"Please enter TIME taken by car: ";
cin>>time;

accTimeProduct = acceleration*time;
finalVel = accTimeProduct + initialVel;
cout<<"The final velocity of the car will be: "<< finalVel << " ms^-1"<<endl;
cout << "_____________________________________________"<<endl;
}