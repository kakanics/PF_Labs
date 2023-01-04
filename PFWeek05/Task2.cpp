#include <iostream>
#include <cmath>

using namespace std;

float positiveRoot(float a, float b, float c);
float NegativeRoot(float a, float b, float c);

main()
{
	float a;
	float b;
	float c;
	float result;

	cin >> a;
	cin >> b;
	cin >> c;

	result = positiveRoot(a,b,c);
	cout << result << endl;
	result = NegativeRoot(a,b,c);
	cout << result << endl;
}

float positiveRoot(float a, float b, float c)
{
	float negB;
	float b2;
	float ac4;
	float difference;
	float sqrtExpr;
	float numerator;
	float divisionFactor;
	float root;
	
	negB = -1*b;
	divisionFactor = 2 *a;

	ac4 = 4 * a * c;
	b2 = b*b;
	difference =  b2 - ac4;
	sqrtExpr = sqrt(difference);

	numerator = negB + sqrtExpr;
	root = numerator/divisionFactor;
	
	return root;	

}
float NegativeRoot(float a, float b, float c)
{
	float negB;
	float b2;
	float ac4;
	float difference;
	float sqrtExpr;
	float numerator;
	float divisionFactor;
	float root;
	
	negB = -1*b;
	divisionFactor = 2 *a;

	ac4 = 4 * a * c;
	b2 = b*b;
	difference =  b2 - ac4;
	sqrtExpr = sqrt(difference);

	numerator = negB - sqrtExpr;
	root = numerator/divisionFactor;
	
	return root;	

}