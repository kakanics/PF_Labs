#include <iostream>
#include <windows.h>

using namespace std;

char getCharAtxy(short int x, short int y);
void gotoXY(int x, int y);
void eraseXY(int x, int y);
void printPacman(int x, int y);
void printMaze();
void scorePrinter(int score);

main()
{
    int pacmanX = 4;
    int pacmanY = 4;
    int score = 0;
    bool gameRunning = true;

    system("cls");
    printMaze();    
    printPacman(pacmanX, pacmanY);

    while(gameRunning)
    {
        
        if(GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation = getCharAtxy(pacmanX-1, pacmanY);
            if(nextLocation == ' ')
            {
                eraseXY(pacmanX, pacmanY);
                pacmanX = pacmanX - 1;
            }
            if(nextLocation == '.')
            {
                eraseXY(pacmanX, pacmanY);
                pacmanX = pacmanX - 1;
                score=score+1;
            }
        } 
        if(GetAsyncKeyState(VK_UP))
        {
            char nextLocation = getCharAtxy(pacmanX, pacmanY-1);
            if(nextLocation == ' ')
            {
                eraseXY(pacmanX, pacmanY);
                pacmanY = pacmanY - 1;
            }
            if(nextLocation == '.')
            {
                eraseXY(pacmanX, pacmanY);
                pacmanY = pacmanY - 1;
                score=score+1;
            }
        } 
        if(GetAsyncKeyState(VK_DOWN))
        {
            char nextLocation = getCharAtxy(pacmanX, pacmanY+1);
            if(nextLocation == ' ')
            {
                eraseXY(pacmanX, pacmanY);
                pacmanY = pacmanY + 1;
            }
            if(nextLocation == '.')
            {
                eraseXY(pacmanX, pacmanY);
                pacmanY = pacmanY + 1;
                score=score+1;
            }
        } 
        if(GetAsyncKeyState(VK_RIGHT))
        {
            char nextLocation = getCharAtxy(pacmanX+1, pacmanY);
            if(nextLocation == ' ')
            {
                eraseXY(pacmanX, pacmanY);
                pacmanX = pacmanX + 1;
            }
            if(nextLocation == '.')
            {
                eraseXY(pacmanX, pacmanY);
                pacmanX = pacmanX + 1;
                score=score+1;
            }
        } 
        if(GetAsyncKeyState(VK_ESCAPE))
            {
                gameRunning = false;
            }
        scorePrinter(score);
        printPacman(pacmanX, pacmanY);
        Sleep(80);
    }

}

void gotoXY(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0,0};
    SMALL_RECT rect = {x,y,x,y};
    COORD coordBuffSize;
    coordBuffSize.X = 1;
    coordBuffSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBuffSize, xy, &rect) ? ci.Char.AsciiChar: ' ';
}

void eraseXY(int x, int y)
{
    gotoXY(x,y);
    cout << " ";
}

void printPacman(int x, int y)
{
    gotoXY(x,y);
    cout << "P";
}
 void printMaze()
{
    cout<<"###############################################################################"<<endl;
    cout<<"||.. .................. ...........................................  ......  ||"<<endl;
    cout<<"||.. %%%%%%%%%%%%%%%%%%        ...             %%%%%%%%%%%%%  |%|..    %%%%  ||"<<endl;
    cout<<"||..        |%|     |%|     |%|...             |%|       |%|  |%|..     |%|  ||"<<endl;
    cout<<"||..        |%|     |%|     |%|...             |%|       |%|  |%|..     |%|  ||"<<endl;
    cout<<"||..        %%%%%%%%%% .  . |%|...             %%%%%%%%%%%%%     ..    %%%%  ||"<<endl;
    cout<<"||..        |%|        .  . |%|...             ...........   |%| ..       .  ||"<<endl;
    cout<<"||..        %%%%%%%%%% .  . |%|...             %%%%%%%%%     |%| ..   %%%%.  ||"<<endl;
    cout<<"||..               |%| .                       |%|......     |%| ..    |%|.  ||"<<endl;
    cout<<"||..|%|  ......... |%| .                       |%|......|%|      ..    |%|.  ||"<<endl;
    cout<<"||..|%|  |%|%%%|%|.|%| .  |%|                     ......|%|      ..|%| |%|.  ||"<<endl;
    cout<<"||..|%|  |%|   |%|..      %%%%%%%%%%%%%%          ......|%|       .|%|.      ||"<<endl;
    cout<<"||..|%|  |%|   |%|..              ...|%|          %%%%%%         . |%|.      ||"<<endl;
    cout<<"||..|%|            .              ...|%|                     |%| ..|%|%%%%%  ||"<<endl;
    cout<<"||..|%|  %%%%%%%%%%%%%            ...|%|%%%%%%%%             |%| ..........  ||"<<endl;
    cout<<"||.....................................................            ........  ||"<<endl;
    cout<<"||   ..................................................      |%| ..|%|.      ||"<<endl;
    cout<<"||..|%|  |%|   |%|..     %%%%%%%%%%%%%%%  ..........|%|      |%| ..|%|.      ||"<<endl;
    cout<<"||..|%|  |%|   |%|..              ...|%|         %%%%%       |%| ..|%|.      ||"<<endl;
    cout<<"||..|%|            .              ...|%|                     |%| ..|%|.      ||"<<endl;
    cout<<"||..|%|   %%%%%%%%%%%%%%          ...|%|%%%%%%%%             |%| ..|%|%%%%%  ||"<<endl;
    cout<<"||.....................................................      |%| ..........  ||"<<endl;
    cout<<"||   ..................................................               .....  ||"<<endl;
    cout<<"###############################################################################"<<endl;
}

void scorePrinter(int score)
{
    gotoXY(5,29);
    cout << "score: " << score;  
}
