#include <iostream>
using namespace std;

char evaluator(int);

main()
{
    int marks;
    char grade;

    cout << "Please enter a number:";
    cin >> marks;

    grade = evaluator(marks);
    cout << grade;
}

char evaluator(int marks)
{
    char grade;

    if(marks < 50)
    {
        grade = 'F';
    }
    else if(marks <= 60)
    {
        grade = 'E';
    }
    else if(marks <= 70)
    {
        grade = 'D';
    }
    else if(marks <= 80)
    {
        grade = 'C';
    }
    else if(marks <= 85)
    {
        grade = 'B';
    }
    else if(marks <= 100)
    {
        grade = 'A';
    }
    return grade;
}
