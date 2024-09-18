#include <bits/stdc++.h>
using namespace std;
enum etype
{
    laborer,
    secretary,
    manager,
    accountant,
    executive,
    researcher
};

int main()
{

    char ch;
    cout << "Enter the employee type (only first letter) :";
    cin >> ch;
    etype employee_type;

    switch (ch)
    {
    case 'l':
    {
        employee_type = laborer;
        break;
    }
    case 's':
    {
        employee_type = secretary;
        break;
    }
    case 'm':
    {
        employee_type = manager;
        break;
    }
    case 'a':
    {
        employee_type = accountant;
        break;
    }
    case 'e':
    {
        employee_type = executive;
        break;
    }
    case 'r':
    {
        employee_type = researcher;
        break;
    }
    default:
        break;
    }

    switch (employee_type)
    {
    case laborer:
    {
        cout << "Employee type laborer";
        break;
    }
    case secretary:
    {
        cout << "Employee type secretary";
        break;
    }

    case manager:
    {
        cout << "Employee type manager";
        break;
    }
    case accountant:
    {
        cout << "Employee type accountant";
        break;
    }
    case executive:
    {
        cout << "Employee type executive";
        break;
    }

    case researcher:
    {
        cout << "Employee type researcher";
        break;
    }
    }

        return 0;
    }