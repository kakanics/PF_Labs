#include <iostream>
using namespace std;

void table(int);

main()
{
    int input;
    cout << "Please enter a number: ";
    cin >> input;
    table(input);


}

void table(int num)
{
    for(int i = 1; i <=10;i++)
    {
        cout << num << " x " << i << " = " <<  num * i << endl;
    }
}
