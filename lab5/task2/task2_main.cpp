#include <iostream>
#include <string>

#include "class.h"

using namespace std;



int main()
{
    DOB d1, d2;
    d1.day = 20;
    d1.month = 11;
    d1.year = 2001;
    Employee e1, e2;
    e1.setInfo("nafiz", d1, 20000, 2020);
    e1.getInfo();
    d1.day = 20;
    d1.month = 11;
    d1.year = 2002;
    e1.setInfo("Zia", d2, 20000, 2021);
    e1.getInfo();
    Employee e3=e1.compare(e2);
    return 0;
}
