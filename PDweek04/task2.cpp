#include <iostream>
#include <windows.h>

using namespace std;

void gotoXY(int x, int y);
void mazeMaker();

main()
{
	system("cls");
	mazeMaker();	

}

void gotoXY(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
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