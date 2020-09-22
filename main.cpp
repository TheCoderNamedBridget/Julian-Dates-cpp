

/*
Bridget Naylor
Class( CECS 282-04 )
Project Name ( Prog 2 myDates )
Due: Sept 23, 2020

I certify that this program is my own original work. I did not copy 
any part of this program from any other source. I further certify 
that I typed each and every line of code in this program.
*/
#include <stdio.h>
#include "MyDate.h"
#include <iostream> 
using namespace std;



int main()
{
    int dayDate;
    int monDate;
    int yearDate;
    
    MyDate date = MyDate( 1, 1, 1970 );
    MyDate date1 = MyDate( 1, 1, 1970 );
    MyDate date2 = MyDate( 1, 30, 1970 );
    MyDate date3 = MyDate( 9, 21, 2020 );
    date.display();
    cout<<endl;
    date.increaseDate(50);
    date.display();
    cout<<endl;
    date.decreaseDate(55);
    date.display();
    cout<<endl;
    cout<<date1.daysBetween(date2);
    cout<<endl;
    cout<<date1.dayOfYear();
    cout<<endl;
    cout<<date3.dayName();


    return 0;
}

