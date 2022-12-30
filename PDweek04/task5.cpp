#include <iostream>
#include <windows.h>

using namespace std;

void gotoXY(int x, int y);
void printA(int x, int y);
void printF(int x, int y);
void printN(int x, int y);

main()
{
	system("cls");
	printA(40,15);
	printF(40,22);
	printF(40,29);
	printA(40,36);
	printN(40,43);
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
void printF(int x, int y)
{
	gotoXY(x,y);
	cout<<"** ** **";

	y=y+1;
	gotoXY(x,y);
	cout<<"** ** **";

	y=y+1;
	gotoXY(x,y);
	cout<<"**";

	y=y+1;
	gotoXY(x,y);
	cout<<"** **";

	y=y+1;
	gotoXY(x,y);
	cout<<"**";

	y=y+1;
	gotoXY(x,y);
	cout<<"**";
}
void printN(int x, int y)
{
	gotoXY(x,y);
	cout<<"** **    **";

	y=y+1;
	gotoXY(x,y);
	cout<<"**  **   **";

	y=y+1;
	gotoXY(x,y);
	cout<<"**   **  **";

	y=y+1;
	gotoXY(x,y);
	cout<<"**    ** **";

	y=y+1;
	gotoXY(x,y);
	cout<<"**     ****";

	y=y+1;
	gotoXY(x,y);
	cout<<"**      ***";
}
	
