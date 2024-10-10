#include <iostream>
#include <string>

using namespace std;

struct DOB
{
    int day;
    int month;
    int year;
};

class Employee
{
private:
    string name;
    DOB dateOfBirth;
    int salary;
    int year;
    string getstatus();
    void calculateBonus();
    void calculateTotalSalary();


public:
    void setInfo(string,DOB,int,int);
    void getInfo();
    Employee compare(Employee) const;
};
