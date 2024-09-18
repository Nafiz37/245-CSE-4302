#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, c, d;
    char ch;
    cout << "Enter the first fraction :";
    cin >> a >> ch >> b;
    cout << "Enter the second fraction :";
    cin >> c >> ch >> d;
    if(b==0 || d==0){
        cout<<"Invalid";
    }
    else{
    cout << ((a * d) + (b * c)) << ch << (b * d);
    }
    return 0;
}