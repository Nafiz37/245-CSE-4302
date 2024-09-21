#include <bits/stdc++.h>
using namespace std;

class RationalNumber
{

private:
    int _numerator;
    int _denominator;

public:
    RationalNumber()
    {
        _denominator = 0;
    }
    void assign(int numerator, int denominator)
    {
        if (denominator == 0)
        {
            cout << "You can not assign 0 as denominator" << endl;
        }
        else
        {
            _numerator = numerator;
            _denominator = denominator;
        }
    }
    float convert()
    {
        float result = (float)_numerator / _denominator;
        return result;
    }
    void invert()
    {
        int temp = _numerator;
        if (temp == 0)
        {
            cout << "You can not assign 0 as denominator" << endl;
        }
        else
        {
            _numerator = _denominator;
            _denominator = temp;
        }
    }
    void print()
    {
        if (_denominator == 0)
        {
            cout << "Not a Rational Number" << endl;
        }
        else if(_numerator == 0){
            cout<< "The Rational Number is:"<<_numerator<<endl;
        }
        else
            cout << "The Rational Number is :" << _numerator << "/" << _denominator << endl;
    }
};

int main()
{

    RationalNumber r1;
    r1.assign(3, 0);
    r1.print();
    r1.assign(5, 2);
    cout << r1.convert() << endl;
    r1.assign(0, 2);
    r1.invert();
    r1.print();
    r1.assign(5, 2);
    r1.invert();
    r1.print();
    return 0;
}