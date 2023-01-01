#include <iostream>
#include <windows.h>
using namespace std;

void printMenu();
void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks);
void CompareMarks(string nameSt1, float ecatMarks1, string nameSt2, float ecatMarks2);

main()
{	
	system("cls");
	int operation;
	char c;

    string name1;
    string name2;
    float matricMarks1;
    float matricMarks2;
    float interMarks1;
    float interMarks2;
    float ecatMarks1;
    float ecatMarks2;

    while(true)
    {
        printMenu();
        cin >> operation;
        if (operation == 1)
        {	
            system("cls");
            
            cout << "Please enter your name: ";
            cin >> name1;
            cout << "Please enter your marks in matric: ";
            cin >> matricMarks1;
            cout << "Please enter your marks in inter: ";
            cin >> interMarks1;
            cout << "Please enter your marks in ecat: ";
            cin >> ecatMarks1;
        }
        if (operation == 2)
        {	
            system("cls");
            
            cout << "Please enter your name: ";
            cin >> name2;
            cout << "Please enter your marks in matric: ";
            cin >> matricMarks2;
            cout << "Please enter your marks in inter: ";
            cin >> interMarks2;
            cout << "Please enter your marks in ecat: ";
            cin >> ecatMarks2;
        }
        if (operation == 3)
        {
            system("cls");
            calculateAggregate(name1, matricMarks1, interMarks1, ecatMarks1);
        }
        if (operation == 4)
        {
            system("cls");
            calculateAggregate(name2, matricMarks2, interMarks2, ecatMarks2);
        }
        if (operation == 5)
        {
            system("cls");
            CompareMarks(name1, ecatMarks1, name2, ecatMarks2);
        }
    }
}

void printMenu()
{
	cout<<"*************************************************"<<endl;
	cout<<"*                                               *"<<endl;
	cout<<"*    WELCOME TO UNIVERSITY ADMISSION SYSTEM     *"<<endl;
	cout<<"*                                               *"<<endl;
	cout<<"*************************************************"<<endl;

	cout<<"press 1: Enter details of Student 1"<<endl;
	cout<<"press 2: Enter details of Student 2" <<endl;
    cout<<"press 3: Show aggregate of Student 1"<<endl;
    cout<<"press 4: Show aggregate of Student 2"<<endl;
    cout<<"press 5: Check roll number 1"<<endl;
}

void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks)
{	
	float aggregate;
    char ch;
	aggregate = (matricMarks/1100)*0.3;
	aggregate = aggregate + (interMarks/550)*0.3;
	aggregate = aggregate + (ecatMarks/400)*0.4;
	aggregate = aggregate * 100;

	cout << "Dear "<< name << ", your aggregate is: " << aggregate << "%"<< endl;
    cout << "type any character and press enter to continue";
    cin >> ch;
}

void CompareMarks(string nameSt1, float ecatMarks1, string nameSt2, float ecatMarks2)
{
    char ch;
	if(ecatMarks1>ecatMarks2)
	{
	cout << nameSt1 <<" gets the first roll number"<<endl;
	}

	if(ecatMarks1<ecatMarks2)
	{
	cout << nameSt2 <<" gets the first roll number"<<endl;
	}
    cout << "type any character and press enter to continue";
    cin >> ch;
}