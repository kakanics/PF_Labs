#include <iostream>
#include <windows.h>

using namespace std;

void gotoXY(int x, int y);
void move(int x, int y);
void mazeMaker();

main()
{
	system("cls");
	mazeMaker();
	move(5,5);


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
	Sleep(300);
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