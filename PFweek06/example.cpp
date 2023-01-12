#include <iostream>
using namespace std;

int greatest(int, int, int);

main()
{
    int num1;
    int num2;
    int num3;
    int largestNum;

    cin >> num1;
    cin >> num2;
    cin >> num3;

    largestNum = greatest(num1, num2, num3);
    cout << largestNum;
}

int greatest(int num1, int num2, int num3)
{
    int answer;
    if (num1 > num2 && num1 > num3)
    {
        answer= num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        answer=num2;
    }
    else
    {
        answer=num3;
    }
    return answer;
}
