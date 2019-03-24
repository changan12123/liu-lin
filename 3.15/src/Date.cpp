#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;
class Date
{
    public:
        explicit Date(int year,int month,int day )
    {
        setYear(year);
        setMonth(month);
        setDay(day);

    }

        void setMonth(int month)
        {
            if (month==0&&month>12&&month<0){
                month = 1;
            }
            else
            {
                this->month=month;
            }
        }
        int getMonth()
        {
            return month;
        }
        void setDay(int day)
        {
            this->day=day;
        }
        int getDay()
        {
            return day;
        }
        void setYear(int year)
        {
            this->year=year;
        }
        int getYear()
        {
            return year;
        }
        void displayDate()
        {
            cout << this->getYear()<<"/"<<this->getMonth()<<"/"<<this->getDay();
        }
    private:
        int month, day, year;
};

#endif // DATE_H
