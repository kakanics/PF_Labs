#include <iostream>

using namespace std;

string signCalc(int, string);

main()
{
    string star;
    string month;
    int date;

    cout << "Please enter the date and month: ";
    cin >> date >> month;

    star = signCalc(date, month); 
    cout << star;
}

string signCalc(int date, string month)
{
    string star;
    if((date <= 20 && month == "January")||(date > 20 && month == "December"))
    {
        star = "Capricorn";
    }
    if((date <= 20 && month == "February")||(date > 20 && month == "January"))
    {
        star = "Aquarius";
    }
    if((date <= 20 && month == "March")||(date > 20 && month == "February"))
    {
        star = "Pisces";
    }
    if((date <= 20 && month == "April")||(date > 20 && month == "March"))
    {
        star = "Aries";
    }
    if((date <= 20 && month == "May")||(date > 20 && month == "April"))
    {
        star = "Taurus";
    }
    if((date <= 20 && month == "June")||(date > 20 && month == "May"))
    {
        star = "Gemini";
    }
    if((date <= 20 && month == "July")||(date > 20 && month == "June"))
    {
        star = "Cancer";
    }
    if((date <= 20 && month == "August")||(date > 20 && month == "July"))
    {
        star = "Leo";
    }
    if((date <= 20 && month == "September")||(date > 20 && month == "August"))
    {
        star = "Virgo";
    }    
    if((date <= 20 && month == "October")||(date > 20 && month == "September"))
    {
        star = "Libra";
    }
    if((date <= 20 && month == "November")||(date > 20 && month == "October"))
    {
        star = "Scorpio";
    }  
    if((date <= 20 && month == "December")||(date > 20 && month == "November"))
    {
        star = "Saggitaius";
    }    
    if(date < 1 || date > 31)
    {star = "INVALID DATE!!!!!!!!!!!";}
    return star;
}
