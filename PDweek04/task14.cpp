#include <iostream>
#include <windows.h>
using namespace std;

void prfloatMenu();
void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks);
void CompareMarks(string nameSt1, float ecatMarks1, string nameSt2, float ecatMarks2);

main()
{	
	system("cls");
	float operation;
	prfloatMenu();

	cin >> operation;
	if (operation == 1)
	{	
		system("cls");
		string name;
		float matricMarks;
		float interMarks;
		float ecatMarks;
		
		cout << "Please enter your name: ";
		cin >> name;
		cout << "Please enter your marks in matric: ";
		cin >> matricMarks;
		cout << "Please enter your marks in inter: ";
		cin >> interMarks;
		cout << "Please enter your marks in ecat: ";
		cin >> ecatMarks;
		
		calculateAggregate(name, matricMarks, interMarks, ecatMarks);
	}

	if (operation == 2)
	{
		system("cls");
		string nameStudent1;
		string nameStudent2;
		float ecatMarks1;
		float ecatMarks2;

		cout<< "Please enter the name of first student: ";
		cin >> nameStudent1;
		cout<< "Please enter their ecat marks: ";
		cin >> ecatMarks1;
		
		cout<< "Please enter the name of second student: ";
		cin >> nameStudent2;
		cout<< "Please enter their ecat marks: ";
		cin >> ecatMarks2;

		CompareMarks(nameStudent1, ecatMarks1, nameStudent2, ecatMarks2);
	}
}

void prfloatMenu()
{
	cout<<"*************************************************"<<endl;
	cout<<"*                                               *"<<endl;
	cout<<"*    WELCOME TO UNIVERSITY ADMISSION SYSTEM     *"<<endl;
	cout<<"*                                               *"<<endl;
	cout<<"*************************************************"<<endl;

	cout<<"press 1: Calculate aggregate"<<endl;
	cout<<"press 2: Compare students" <<endl;
}

void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks)
{	
	float aggregate;
	aggregate = (matricMarks/1100)*0.3;
	aggregate = aggregate + (interMarks/550)*0.3;
	aggregate = aggregate + (ecatMarks/400)*0.4;
	aggregate = aggregate * 100;

	cout << "Dear "<< name << ", your aggregate is: " << aggregate << "%";
}

void CompareMarks(string nameSt1, float ecatMarks1, string nameSt2, float ecatMarks2)
{
	if(ecatMarks1>ecatMarks2)
	{
	cout << nameSt1 <<" gets the first roll number";
	}

	if(ecatMarks1<ecatMarks2)
	{
	cout << nameSt2 <<" gets the first roll number";
	}
}