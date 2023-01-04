#include <iostream>
#include <cmath>

using namespace std;
float heightEval(float, float);

main()
{
	float angle = 30;
	float base = 43;
	float height;

	cout << "Enter then angle of elevation in degrees: ";
	cin >> angle;
	cout << "Please enter the distance to the tree: ";
	cin >> base;

	height = heightEval(angle, base);
	cout << "The height of the tree is: " << height;
}
float heightEval(float angle, float base)
{
	float Step1 = tan(angle/57.2958);
	float Step2 = Step1 * base; 
	return Step2;
}