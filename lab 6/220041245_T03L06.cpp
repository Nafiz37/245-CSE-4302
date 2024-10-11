#include <bits/stdc++.h>

using namespace std;

class Kelvin;
class Fahrenheit;

class Celsius
{

public:
    friend class Kelvin;
    friend class Fahrenheit;
    float tempC;
    Celsius() { tempC = 0.0; }
    Celsius(float t)
    {
        tempC = t;
    }

    void assign(float t)
    {
        if (t > -273.15)
        {
            tempC = t;
        }
    }

    void display()
    {
        cout << "The temperature is " << tempC << "Celsius" << endl;
    }
};

class Kelvin
{

public:
    float tempK;
    friend class Celsius;
    Kelvin() { tempK = 0.0; }
    Kelvin(float t)
    {
        if (t > 0)
        {
            tempK = t;
        }
        else tempK=0.0;
    }
    void operator+(Celsius &a)
    {
        tempK = a.tempC + 273.15;
    }
    void display()
    {

        cout << "The temperature is " << tempK << "Kelvin" << endl;
    }
};
class Fahrenheit
{

public:
    float tempF;
    Fahrenheit() { tempF = 0.0; }
    Fahrenheit(float t)
    {
        if (t > 523.67)
        {
            tempF = t;
        }
        else tempF=0.0;
    }
    void operator*(Celsius &a)
    {
        tempF = (a.tempC * 9 / 5) + 32;
    }
    // void operator + (){
    //     tempF=tempF+32;
    // }
    void display()
    {
        cout << "The temperature is " << tempF << "Fahrenheit" << endl;
    }
};

int main()
{
    Celsius c1;
    Kelvin k1;
    Fahrenheit f1;
    c1.assign(100.0);
    c1.display();
    k1 + c1;
    k1.display();
    f1 *c1;
    f1.display();

    Kelvin k2(-4.0);
    k2.display();
}