#include <iostream>
using namespace std;

void ifPass(int marks);

main()
{
	int marks;
	while(true)
	{
		cout<<"Enter Marks: ";
		cin >> marks;
		ifPass(marks);
	}
}

void ifPass(int marks)
{
	if(marks>50)
	{
	cout<<"You passed!"<<endl;
	}
	
	if(marks<50)
	{
	cout<<"You failed!"<<endl;
	}
	
	if(marks==50)
	{
	cout<<"You are at the mercy of the teacher!"<<endl;
	}
}