#include <iostream>
using namespace std;

main()
{
    int length, xCoord, yCoord, flag;

    cout<< "Enter length, x, y: ";
    cin >> length;
    cin >> xCoord;
    cin >> yCoord;

    //form 2 boxes, one has coords [{0,0}, {0,h}, {3h, 0}, {3h, h}]
    //other has coords [{h,0}, {2h,0}, {h,4h}, {2h,4h}]

    //compare x with x and y with y

    if(((xCoord>0)&&(xCoord<3*length)) && (yCoord>0)&&(yCoord<length))
    {
        flag = 1;
    }
    else if(((xCoord>length)&&(xCoord<2*length)) && (yCoord>0)&&(yCoord<4*length))
    {
        flag = 1;
    }
    else if(((xCoord>=length)&&(xCoord<=2*length)) && (yCoord>=0)&&(yCoord<=4*length))
    {
        flag = 3;
    }
    else if(((xCoord>=0)&&(xCoord<=3*length)) && (yCoord>=0)&&(yCoord<=length))
    {
        flag = 3;
    }
    else 
    {
        flag = 2;
    }
    
    if(flag == 1)
    {
        cout << "Inside";
    }
    if(flag == 2)
    {
        cout << "Outside";
    }
    if(flag == 3)
    {
        cout << "Border";
    }
    
}