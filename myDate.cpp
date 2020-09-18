
#include "MyDate.h"
#include <iostream>
using namespace std;

int Greg2Julian( int mon, int day, int year )//pass m, d, y return julian
{
    
}

void Julian2Greg( int JD, int & month, int & day, int & year )//pass in julian date and get m, d, y through parameter list and pass by ref
{
    
}

MyDate::MyDate()
{
    month = 5;
    day = 11;
    year = 1959;
}

MyDate::MyDate( int M, int D, int Y )
{
    month = M;
    day = D;
    year = Y;
}

void MyDate::display()
{
    string m;
    if ( month == 1 )
    {
        m = "January";
    }
    else if ( month == 2 )
    {
        m = "February";
    }
    else if ( month == 3 )
    {
        m = "March";
    }
    else if ( month == 4 )
    {
        m = "April";
    }
    else if ( month == 5 )
    {
        m = "May";
    }
    else if ( month == 6 )
    {
        m = "June";
    }
    else if ( month == 7 )
    {
        m = "July";
    }
    else if ( month == 8 )
    {
        m = "August";
    }
    else if ( month == 9 )
    {
        m = "September";
    }
    else if ( month == 10 )
    {
        m = "October";
    }
    else if ( month == 11 )
    {
        m = "November";
    }
    else if ( month == 12 )
    {
        m = "December";
    }
    cout<<m<<" "<<day<<", "<<year;
}

void MyDate::increaseDate( int n )
{
    day += n;
}

void MyDate::decreaseDate( int n )
{
    day -= n;
}

int MyDate::daysBetween( MyDate D )//TODO finish this function
{
    return 0;
}

int MyDate::getMonth()
{
    return month;
}

int MyDate::getDay()
{
    return day;
}

int MyDate::getYear()
{
    return year;
}

int dayOfYear()//return number of days since current year began
{
    return 0;
}

string dayName()//return day of week, mondy, tuesday,...
{
    return "default";
}
