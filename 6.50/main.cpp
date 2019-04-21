#include <iostream>
using namespace std;

double pi = 3.14159; // global variable

// circleArea is inline function that returns area of circle
inline double circleArea( double r )
{
   return pi * r * r; // return area
} // end function circleArea

int main()
{
   double radius; // user entered radius

   // prompt for radius
   cout << "Enter the radius of the circle: ";
   cin >> radius;

   // calculate and display area of circle
   cout << "The area of the circle is " << circleArea( radius ) << endl;
} // end main
