#ifndef CLASS_H
#define CLASS_H

#include "class.h"

int convert(DOB d)
{
    return d.year * 365 + d.month * 30 + d.day;
}

Employee::Employee() : name{"John Doe"}, dateOfBirth{1, 1, 2002}, salary(10000), year(2024) {}

string Employee::getstatus()
{
    int age = 2024 - year;
    if (age <= 25)
    {
        if (salary <= 20000)
            return "Low";
        else
            return "Moderate";
    }
    else
    {
        if (salary <= 21000)
            return "Low";
        else if (salary <= 60000)
            return "Moderate";
        else
            return "High";
    }
}
void Employee::calculateBonus()
{
    string temp;
    temp = getstatus();
    if (temp == "Low")
    {
        salary = (salary * .05);
    }
    else if (temp == "Moderate")
    {
        salary = salary + (salary * .10);
    }
    else if (temp == "High")
    {
        salary = salary + (salary * .15);
    }
}
void Employee::calculateTotalSalary()
{
    salary = salary + (salary * .03 * (2024 - year));
    salary = salary + (salary * .5);
}

void Employee::setInfo(std::string n, DOB d, int s, int y)
{

    name = n;

    if (convert(d) > convert({10, 4, 2006}))
    {
        dateOfBirth = d;
    }

    salary = s;

    year = y;
}

void Employee::getInfo()
{
    cout << " Employee name: " << name << endl;

    cout << " Employee Date Of Birth: " << dateOfBirth.day << dateOfBirth.month << dateOfBirth.year << endl;
    calculateTotalSalary();

    cout << " Employee Total Salary: " << salary << endl;
    calculateBonus();

    cout << " Employee Bonus Salary: " << salary << endl;
}
Employee Employee::compare(Employee other)const
{
    if (convert(this->dateOfBirth) > convert(other.dateOfBirth))
        return other;
    return *this;
}

#endif