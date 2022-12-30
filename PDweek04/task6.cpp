#include <iostream>
#include <windows.h>

using namespace std;

void gotoXY(int x, int y);
void printA(int x, int y);
void printW(int x, int y);
void printI(int x, int y);
void printS(int x, int y);

main()
{
	system("cls");
	printA(25,25);
	printW(25,32);
	printA(25,39);
	printI(25,46);
	printS(25,53);
}

void gotoXY(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printA(int x, int y)
{
	gotoXY(x,y);
	cout<<"   **";

	y=y+1;
	gotoXY(x,y);
	cout<<" **  **";

	y=y+1;
	gotoXY(x,y);
	cout<<"**    **";

	y=y+1;
	gotoXY(x,y);
	cout<<"** ** **";

	y=y+1;
	gotoXY(x,y);
	cout<<"**    **";

	y=y+1;
	gotoXY(x,y);
	cout<<"**    **";
}


void printW(int x, int y)
{
	gotoXY(x,y);
	cout<<"**            **";

	y=y+1;
	gotoXY(x,y);
	cout<<"**            **";

	y=y+1;
	gotoXY(x,y);
	cout<<"**    **      **";

	y=y+1;
	gotoXY(x,y);
	cout<<"**   ****     **";

	y=y+1;
	gotoXY(x,y);
	cout<<" ** **   **  **";

	y=y+1;
	gotoXY(x,y);
	cout<<"  **       **";
}


void printI(int x, int y)
{
	gotoXY(x,y);
	cout<<"****";

	y=y+1;
	gotoXY(x,y);
	cout<<" **";

	y=y+1;
	gotoXY(x,y);
	cout<<" **";

	y=y+1;
	gotoXY(x,y);
	cout<<" **";

	y=y+1;
	gotoXY(x,y);
	cout<<" **";

	y=y+1;
	gotoXY(x,y);
	cout<<"****";
}

void printS(int x, int y)
{

	gotoXY(x,y);
	cout<<"  ** ** **";

	y=y+1;
	gotoXY(x,y);
	cout<<"**";

	y=y+1;
	gotoXY(x,y);
	cout<<"**";

	y=y+1;
	gotoXY(x,y);
	cout<<"  ** ** ";

	y=y+1;
	gotoXY(x,y);
	cout<<"        **";

	y=y+1;
	gotoXY(x,y);
	cout<<"        **";

	y=y+1;
	gotoXY(x,y);
	cout<<"  ** **";
}

