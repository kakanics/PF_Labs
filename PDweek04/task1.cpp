#include <iostream>
#include <windows.h>

using namespace std;

void gotoXY(int x, int y);

main()
{
	system("cls");
	cout << "Test";
	gotoXY(25,15);
	cout << "My name is Affana Ahmed";
}

void gotoXY(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}