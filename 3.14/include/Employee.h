#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
using namespace std;

class Employee
{
    public:
        explicit Employee()
        {
        }

        void setFirstName(string firstname)
        {
            firstName=firstname;
        }
        string getFirstName()
        {
        return firstName;
        }
        void setLastName(string lastname)
        {
            lastName=lastname;
        }
        string getLastName()
        {
        return lastName;
        }
        void setSalary(double salary)
        {
            if (salary>=0){
            this->salary=salary;//ÀàÀïµÄsalary
        }
        else
        {
            salary=0;
        }
        }
        double getSalary()
        {
        return salary;
        }

    private:
        string firstName , lastName;
        double salary;


};

#endif // EMPLOYEE_H

