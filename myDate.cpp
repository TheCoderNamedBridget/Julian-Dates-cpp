
#include "MyDate.h"
#include <iostream>
using namespace std;

int Greg2Julian( int mon, int day, int year )//pass m, d, y return julian
{
    int JD = day - 32075 + 1461*(year + 4800+(mon-14)/12)/4+367*
        (mon-2-(mon-14)/12*12)/12-3*((year+4900+(mon-14)/12)/100)/4;
    return JD;
}

void Julian2Greg( int JD, int & month, int & day, int & year )//pass in julian date and get m, d, y through parameter list and pass by ref
{
    int L;
    int N;
    int J;
    int K;
    int I;
    L = JD + 68569;
    N = 4 * L / 146097;
    L = L - ( 146097 * N + 3 ) / 4;
    I = 4000 * ( L + 1 ) / 1461001;
    L = L - 1461 * I / 4 + 31;
    J = 80 * L / 2447;
    K = L - 2447 * J / 80;
    L = J / 11;
    J = J + 2 - 12 * L;
    I = 100 * ( N - 49 ) + I + L;
    
    year = I;
    month = J;
    day = K;
    //cout<<month<<" "<<day<<" "<<year<<endl;
}

MyDate::MyDate()
{
    month = 5;
    day = 11;
    year = 1959;
}

MyDate::MyDate( int M, int D, int Y )
{
    int m1, d1, y1 = 0;
    //Use gregorian 
    //int JD = G2J( m, d, y );
    //int jd2;
    //j2g( jd, m1, y1);
    if ( M != m1 || D != d1 || Y != y1 )
    {
        month = 5;
        day = 11;
        year = 1959;
    }
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
    int gregDate = Greg2Julian( month, day, year ) + n;
    Julian2Greg( gregDate, month, day, year );
    //turn current date into a julian date add n 
    //convert bak to gregorian date
}

void MyDate::decreaseDate( int n )
{
    //turn current date into a julian date add n 
    //convert bak to gregorian date
    int gregDate = Greg2Julian( month, day, year) - n;
    Julian2Greg( gregDate, month, day, year );
}

int MyDate::daysBetween( MyDate D )
{
    // turn both of the dates into julian dates then subtract 
    //original from D
    int gregDate1 = Greg2Julian( D.getMonth(), D.getDay(), D.getYear() );
    int gregDate2 = Greg2Julian( month, day, year );
    return gregDate1 - gregDate2;
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

int MyDate::dayOfYear()//return number of days since current year began
{
    //use julian dates 
    
    return 0;
}

string MyDate::dayName()//return day of week, mondy, tuesday,...
{
    //figure out today's name of the day
    //convert to julian
    //then use the modulo to calculate other dates day of the week
    //9/22/2020 = tuesday
    string dayName = "";
    int tuesdayRemainder = Greg2Julian( 9, 22, 2020 ) % 7;
    //cout<<tuesdayRemainder;
    int gregDate = Greg2Julian( month, day, year );
    if ( gregDate % 7 == tuesdayRemainder )
    {
        dayName = "Tuesday";
    }
    else if ( gregDate % 7 == tuesdayRemainder + 1 )
    {
        dayName = "Wednesday";
    }
    else if ( gregDate % 7 == tuesdayRemainder + 2 )
    {
        dayName = "Thursday";
    }
    else if ( gregDate % 7 == tuesdayRemainder + 3 )
    {
        dayName = "Friday";
    }
    else if ( gregDate % 7 == tuesdayRemainder + 4 )
    {
        dayName = "Saturday";
    }
    else if ( gregDate % 7 == tuesdayRemainder + 5 )
    {
        dayName = "Sunday";
    }
    else if ( gregDate % 7 == tuesdayRemainder - 1 )
    {
        dayName = "Monday";
    }
    return dayName;
}









