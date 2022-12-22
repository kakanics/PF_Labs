#include <iostream>
using namespace std;

main()
{
float length;
float width;
float area;

cout << "Please input length of rectangle: ";
cin >> length;

cout << "Please input width of rectangle: ";
cin >> width;

area = length * width;
cout << "Area of given rectangle = " << area << " squared units";
}