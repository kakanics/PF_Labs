#include <iostream>

using namespace std;

float percentageCalc(float, float);
string gradeCalc(float);

main()
{
    string name;
    string grade;
    int marks1, marks2, marks3, marks4, marks5;
    int totalObtainedMarks;
    int totalMarks = 500;
    float percentage;

    cout << "Please enter your name and obtained marks in each subject: ";
    cin >> name;
    cin >> marks1;
    cin >> marks2;
    cin >> marks3;
    cin >> marks4;
    cin >> marks5;

    totalObtainedMarks = marks1+marks2+marks3+marks4+marks5;
    percentage = percentageCalc(totalObtainedMarks, totalMarks);

    grade = gradeCalc(percentage);

    cout << "Name: " << name << endl << "Obtained Marks: " <<  totalObtainedMarks << endl << "Percentage: " <<  percentage << endl <<"Grade: " <<  grade;
}


float percentageCalc(float obtained, float total)
{
    return (obtained/total)*100;
}
string gradeCalc(float percentage)
{
    string grade;

    if(percentage < 40)
    {
        grade = "F";
    }
    else if(percentage < 50)
    {
        grade = "D";
    }
    else if(percentage < 60)
    {
        grade = "C";
    }
    else if(percentage < 70)
    {
        grade = "B";
    }
    else if(percentage < 80)
    {
        grade = "B+";
    }
    else if(percentage < 90)
    {
        grade = "A";
    }
    else if(percentage < 101)
    {
        grade = "A+";
    }
    if(percentage <0)
    {
        grade = "Invalid Marks entered bro, please don't do that";
    }

    return grade;
}