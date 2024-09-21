#include <bits/stdc++.h>
using namespace std;

class Temperature
{
private:
    float temperature;
    float incrementAmount;

public:
    Temperature(){
        temperature=0;
        incrementAmount=0;
    }
    void setIncrementStep(int n)
    {
        incrementAmount = n;
    }
    float getTemperature()
    {
        return temperature;
    }

    void increment()
    {
        temperature += incrementAmount;
    }
    void reset()
    {
        temperature = 0;
    }
};

int main()
{
    int incri = 4;

    Temperature c1;
    cout << c1.getTemperature() << endl;

    c1.increment();
    cout << c1.getTemperature() << endl;

    c1.setIncrementStep(incri);
    c1.increment();
    cout << c1.getTemperature() << endl;

    c1.reset();
    cout << c1.getTemperature() << endl;
}