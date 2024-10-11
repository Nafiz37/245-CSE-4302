#include <bits/stdc++.h>

using namespace std;

class Car
{

private:
    string make;
    string model;
    double fuelcapacity;
    double fuellevel;

public:
    Car()
    {
        fuelcapacity = 0;
        fuellevel = 0;
    }
    Car(string make, string model, double fuelcapacity)
    {
        this->make = make;
        this->model = model;
        this->fuelcapacity = fuelcapacity;
        fuellevel = 0;
    }

    void operator+(double fuel)
    {
        fuellevel += fuel;
        if (fuellevel > fuelcapacity)
        {
            fuellevel = fuelcapacity;
        }
        // cout << fuellevel << endl;
        // return *this;
    }
    void getter()
    {
        cout << fuellevel << endl;
        cout << fuelcapacity << endl;
    }
    Car operator+=(double fuel)
    {
        fuellevel += fuel;
        if (fuellevel > fuelcapacity)
        {
            fuellevel = fuelcapacity;
        }
        cout << fuellevel << endl;
        return *this;
    }
    Car operator-(double fuel)
    {
        fuellevel -= fuel;
        if (fuellevel <= 0)
        {
            fuellevel = 0;
        }
        return *this;
    }
    bool operator==(const Car &other) const
    {
        return (make == other.make) && (model == other.model) && (fuelcapacity == other.fuelcapacity);
    }
    bool operator<(const Car &other) const
    {
        return fuellevel < other.fuellevel;
    }
    bool operator>(const Car &other) const
    {
        return fuellevel > other.fuellevel;
    }

    friend std::ostream &operator<<(ostream &out, const Car &car)
    {
        out << "Make: " << car.make
            << ",Model: " << car.model
            << ", Fuel Capacity: " << car.fuelcapacity << "L"
            << ", Fuel Level: " << car.fuellevel << "L" << endl;
        return out;
    }

    friend std::istream &operator>>(istream &in, Car &car)
    {
        cout << "Enter Car make: ";
        in >> car.make;
        cout << "Enter Car model: ";
        in >> car.model;
        cout << "Enter Fuel Capacity: ";
        in >> car.fuelcapacity;
        car.fuellevel = 0;
        return in;
    }
};

int main()
{
    Car c1("RollsRoyace", "GT06", 100);
    Car c2("RangeRover", "FT99", 50);

    cout << "the first car:" << endl
         << c1 << endl;
    cout << "the first car:" << endl
         << c2 << endl;

    c1.getter();

    c1 + 15.0;
    c1.getter();
    c2+50.0;
    c2=c2-5;
    c2.getter();

    if (c1 == c2)
    {
        cout << "c1 & c2 are the same car" << endl;
    }
    else
        cout << "c1 and c2 are not same" << endl;
    if (c1 < c2)
        cout << "c1 has less fuel" << endl;
    else
        cout << "c2 has less fuel" << endl;
    if (c1 > c2)
        cout << "c1 has more fuel" << endl;
    else
        cout << "c2 has more fuel" << endl;
}
