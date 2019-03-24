#include <iostream>
#include "GradeBook"

using namespace std;

int main()
{
    GradeBook gradeBook1(CS101 Introduction to Programming","shibo");

    cout << "gradeBook instructorName is:" << gradeBook.getlnstructorName() <<"\n\n";

    gradeBook.setlnstructorName( "Assistant Professor Bates");
    cout <<"This course is presented by shibo:" << gradeBook.getlnstructorName() <<"\n\n;
    gradeBook.displayMessage();
}
