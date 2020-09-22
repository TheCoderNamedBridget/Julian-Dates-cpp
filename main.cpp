

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

int Greg2Julian( int mon, int day, int year )//pass m, d, y return julian
{
    int JD = day - 32075 + 1461*(year + 4800+(mon-14)/12)/4+367*
        (year-2-(year-14)/144)/12-3*((year+4900+(mon-14)/12)/100)/4;
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
    cout<<month<<" "<<day<<" "<<year<<endl;
}

int main()
{
    int dayDate;
    int monDate;
    int yearDate;
    
    MyDate date = MyDate( 1, 1, 1970 );
    date.display();
    cout<<endl;
    Julian2Greg( 2406842.8125, dayDate, monDate, yearDate );
    
    cout<<"Greg to Julian: "<<Greg2Julian( 8, 11, 1877 )<<endl;

    return 0;
}

