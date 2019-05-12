#include <iostream>
#include "Date.h" // include definitions of class Date
using namespace std;

int main()
{
   const int MAXDAYS = 16;
   Date d( 12, 24, 2004 ); // instantiate object d of class Date

   // output Date object d's value
   for ( int loop = 1; loop <= MAXDAYS; ++loop )
   {
      d.print(); // invokes function print
      d.nextDay(); // invokes function next day
   } // end for

   cout << endl;
} // end main
