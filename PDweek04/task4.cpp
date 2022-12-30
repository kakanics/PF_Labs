#include <iostream>
#include <windows.h>

using namespace std;

void gotoXY(int x, int y);
void move(int x, int y);
void mazeMaker();

main()
{
	int x = 5;
	system("cls");
	mazeMaker();

	while(true)
	{
	move(x,5);
	x=x+1;
	}
}

void gotoXY(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


void move(int x, int y)
{
	gotoXY(x-1,y);
	cout << " ";
	gotoXY(x,y);
	cout << "P";
	Sleep(100);
}

void mazeMaker()
{
	cout<<"**********************************************"<<endl;
	cout<<"*                                            *"<<endl;
	cout<<"*                                            *"<<endl;
	cout<<"*                                            *"<<endl;
	cout<<"*                                            *"<<endl;
	cout<<"*                                            *"<<endl;
	cout<<"*                                            *"<<endl;
	cout<<"*                                            *"<<endl;
	cout<<"*                                            *"<<endl;
	cout<<"*                                            *"<<endl;
	cout<<"*                                            *"<<endl;
	cout<<"*                                            *"<<endl;
	cout<<"**********************************************"<<endl;

}