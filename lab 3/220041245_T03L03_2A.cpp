#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
private:
    char name[30];
    char type[30];
    int account_no;
    int balance;

public:
    BankAccount()
    {
        balance = 0;
    }
    void customerdetails(char s[], int n)
    {

        strcpy(name, s);
        account_no = n;
    }
    void accountType(char x[])
    {
        strcpy(type, x);
    }
    void Balance()
    {
        cout << "Account balance :" << balance << endl;
    }
    void deposit(int d)
    {
        if (d < 0)
        {
            cout << "invalid amount" << endl;
        }
        else
        {
            balance += d;
            Balance();
        }
    }
    void withdraw(int w)
    {
        if (w < 0)
        {
            cout << "invalid amount" << endl;
        }
        else
        {
            if (balance < w)
            {
                cout << "Insufficient ammount" << endl;
            }
            else
            {
                balance = balance - w;
                Balance();
            }
        }
    }
    void display()
    {
        cout << "Account details: " << endl;
        cout << "Name of the customer: " << name << endl;
        cout << "Account type: " << type << endl;
        cout << "Account No. :" << account_no << endl;
        cout << "Account Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b1;
    char s[] = "Nafiz Zia";
    char x[] = "Current";
    int n = 220041245;

    b1.customerdetails(s, n);
    b1.accountType(x);

    b1.display();
    // b1.Balance();

    int d = 50000;
    b1.deposit(d);
    // b1.Balance();
    int w = 60000;
    b1.withdraw(w);
    // b1.Balance();

    return 0;
}