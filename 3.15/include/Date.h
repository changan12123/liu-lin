#include "Date.h"
#include <iostream>
using namespace std;
//Date::Date()
//{
//    ctor
//}
//
//Date::~Date()
//{
//    //dtor
//}
int main ()
{
    int a,b,c;
    cin>>a>>b>>c;
    Date D (a,b,c);

    D.displayDate();
}
