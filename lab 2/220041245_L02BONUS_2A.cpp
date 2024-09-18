#include <bits/stdc++.h>
using namespace std;

struct cars
{
    string name;
    string model;
    int year;
    string fuel;
    string mileage;
};

void display(struct cars c)
{

    cout << "Brand: " << c.name << endl;
    cout << "Model: " << c.model << endl;
    cout << "Year: " << c.year << endl;
    cout << "Fuel type : " << c.fuel << endl;
    cout << "Mileage: " << c.mileage << endl;
}

void efficiency(struct cars c)
{
    int ef;
    ef = stoi(c.mileage);
    if (ef >= 15)
    {
        cout << "The car is fuel efficient" << endl;
    }
    else
        cout << "The car is fuel inefficient" << endl;
}

void cost(struct cars c)
{
    int fuel = stoi(c.mileage);
    float cost = 100 / fuel;

    if (c.fuel == "Petrol")
    {
        cout << "Total estimated cost for 100KM " << '$' << cost * (0.89) << endl;
    }
    else if (c.fuel == "Diesel")
    {
        cout << "Total estimated cost for 100KM " << '$' << cost * (3.24) << endl;
    }
    else if (c.fuel == "Hybrid")
    {
        cout << "Total estimated cost for 100KM " << '$' << cost * (2.45) << endl;
    }
    else
    {
        cout << "This car is electrical" << endl;
    }
}

int main()
{

    int n, m;

    cout << "Enter the number of cars: ";
    cin >> n;
    m = n;
    struct cars car[n];
    int i = 0;
    while (n--)
    {
        cout << "New Car: " << endl;
        cin >> car[i].name;
        cin >> car[i].model;
        cin >> car[i].year;
        cin >> car[i].fuel;
        cin >> car[i].mileage;
        i++;
    }

    int j = 0;
    while (m--)
    {
        int l = 1;
        cout << "Car" << l << endl;
        display(car[j]);
        efficiency(car[j]);
        cost(car[j]);
        j++;
        l++;
    }

    return 0;
}