#include <iostream>
#include <windows.h>

using namespace std;

void gotoXY(int x, int y);
void move(int x, int y);
void mazeMaker();

main()
{

	int y = 1;
	int directionFlag = 0;
	system("cls");
	mazeMaker();

	while(true)
	{
		move(10,y);

		if(y == 11)
		{
		directionFlag = 1;
		}	
	
		if(y == 1)
		{
		directionFlag = 0;
		}
		
	
		if(directionFlag == 0)
		{
		y=y+1;
		}
			
		if(directionFlag == 1)
		{
		y=y-1;
		}
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
	gotoXY(x,y);
	cout << "P";
	Sleep(200);
	gotoXY(x,y);
	cout << " ";
}

void mazeMaker()
{
	system("cls");
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