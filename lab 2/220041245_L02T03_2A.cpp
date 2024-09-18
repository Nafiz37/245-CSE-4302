#include <bits/stdc++.h>
using namespace std;

struct fraction
{
    int numerator;
    int denominator;
};

int main()
{
    char ch;
    struct fraction fr1, fr2, sum;
    cout << "Enter the first fraction :";
    cin >> fr1.numerator >> ch >> fr1.denominator;

    cout << "Enter the second fraction :";
    cin >> fr2.numerator >>ch>>  fr2.denominator;

    sum.numerator = (fr1.numerator * fr2.denominator) + (fr2.numerator * fr1.denominator);
    
    sum.denominator = fr1.denominator * fr2.denominator;
    if( fr1.denominator==0 || fr2.denominator==0){
        cout<<"Invalid";
    }
    else{
    cout << sum.numerator << ch << sum.denominator;
    }
    return 0;
}