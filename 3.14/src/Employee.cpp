#include "Employee.h"
#include <iostream>


using namespace std;


int main ()
{

    double s1,s2;
    Employee E1 ;
    Employee E2 ;
    cin >> s1>>s2;
    E1.setSalary(s1*12);
    E2.setSalary(s2*12);

    cout << E1.getSalary()<<endl;
    cout << E2.getSalary()<<endl;
    E1.setSalary(s1*1.1);
    E2.setSalary(s2*1.1);

    cout << E1.getSalary()<<endl;
    cout << E2.getSalary()<<endl;

}
