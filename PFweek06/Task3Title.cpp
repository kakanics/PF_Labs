#include <iostream>
using namespace std;

string chkTitle(int, char);

main()
{
    int age;
    char gender;
    string title;

    cout << "Please enter age and gender(M/F)";
    cin >> age;
    cin >> gender;

    title = chkTitle(age, gender);
    cout << title;
}

string chkTitle(int age, char gender)
{
    string title;
    if(gender == 'M')
    {
        if(age >= 16)
        {
            title = "Mr.";
        }
        else 
        {
            title = "Master";
        }
    }
    else if (gender == 'F') {
        if(age >= 16)
        {
            title = "Mrs.";
        }
        else 
        {
            title = "Miss";
        }
    }
    return title;
}