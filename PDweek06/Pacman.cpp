#include <iostream>
#include <windows.h>

using namespace std;

char getCharAtxy(short int x, short int y);
void gotoXY(int x, int y);
void eraseXY(int x, int y);
void printPacman(int x, int y);
void printMaze();
void scorePrinter(int score);
void clearScreen(int x, int y, char prev);
void printGhost(int x, int y);

main()
{
    int pacmanX = 4;
    int pacmanY = 4;
    int directionFlag = 0;          //1 for left, 2 for right, 3 for up, 4 for down
    int score = 0;
    bool gameRunning = true;


    int ghostX1 = 20;
    int ghostY1 = 15;
    bool ghost1FaceLeft = true;

    int ghostX2 = 28;
    int ghostY2 = 15;
    bool ghost2FaceDown = true;


    char prevG1 = '.';
    char prevG2 = '.';

    system("cls");
    printMaze();    
    printPacman(pacmanX, pacmanY);

    while(gameRunning)
    {
        if(directionFlag == 1) //left
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
            if(nextLocation == 'G')
            {
                gameRunning = false;
            }
        }
        if(directionFlag == 2) //right
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
            if(nextLocation == 'G')
            {
                gameRunning = false;
            }
        }
        if(directionFlag == 3) //up
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
            if(nextLocation == 'G')
            {
                gameRunning = false;
            }
        }
        if(directionFlag == 4) //down
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
            if(nextLocation == 'G')
            {
                gameRunning = false;
            }
        }


        if(GetAsyncKeyState(VK_LEFT))
        {
            directionFlag = 1;
        } 
        if(GetAsyncKeyState(VK_UP))
        {
            directionFlag = 3;
        } 
        if(GetAsyncKeyState(VK_DOWN))
        {
            directionFlag = 4;
        } 
        if(GetAsyncKeyState(VK_RIGHT))
        {
            directionFlag = 2;
        } 
        if(GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning = false;
        }



        // GHOST NUMBER 1
        if(ghost1FaceLeft)
        {
            char nextLocation = getCharAtxy(ghostX1-1, ghostY1);
            if(nextLocation == 'G')
            {
                nextLocation = ' ';
            }
            if(nextLocation== '%' ||nextLocation== '|' )
            {
                ghost1FaceLeft = false;
            }
            clearScreen(ghostX1,ghostY1, prevG1);
            ghostX1=ghostX1-1;
            prevG1 = nextLocation;
        }
        if(!ghost1FaceLeft)
        {
            char nextLocation = getCharAtxy(ghostX1+1, ghostY1);
            if(nextLocation == 'G')
            {
                nextLocation = ' ';
            }
            if(nextLocation== '%'||nextLocation== '|')
            {
                ghost1FaceLeft = true;
            }
            clearScreen(ghostX1,ghostY1, prevG1);
            ghostX1=ghostX1+1;
            prevG1 = nextLocation;
        }

        //GHOST NUMBER 2
        if(ghost2FaceDown)
        {
            char nextLocation = getCharAtxy(ghostX2, ghostY2-1);
            if(nextLocation== '%' ||nextLocation== '|')
            {
                ghost2FaceDown = false;
            }
            clearScreen(ghostX2,ghostY2, prevG2);
            ghostY2=ghostY2-1;
            prevG2 = nextLocation;
        }
        if(!ghost2FaceDown)
        {
            char nextLocation = getCharAtxy(ghostX2, ghostY2+1);
            if(nextLocation== '%'||nextLocation== '|')
            {
                ghost2FaceDown = true;
            }
            clearScreen(ghostX2,ghostY2, prevG2);
            ghostY2=ghostY2+1;
            prevG2 = nextLocation;
        }


        scorePrinter(score);
        printGhost(ghostX1, ghostY1);
        printGhost(ghostX2, ghostY2);
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
    cout<<"||   ..................................................                      ||"<<endl;
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

void printGhost(int x, int y)
{
    gotoXY(x,y);
    cout << "G";
}

void clearScreen(int x, int y, char prev)
{
    gotoXY(x,y);
    cout << prev;
}