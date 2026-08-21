#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
private:
    int accountNo;
    double balance;

public:
    BankAccount(int acc, double bal)
    {
        accountNo = acc;
        balance = bal;
    }

    void deposit(double amount)
    {
        balance = balance + amount;
        cout << "Amount deposited successfully.\n";
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully.\n";
        }
        else
        {
            cout << "Insufficient balance.\n";
        }
    }

    void display()
    {
        cout << "\nAccount No: " << accountNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account(101, 5000);

    account.display();

    account.deposit(2000);
    account.display();

    account.withdraw(1500);
    account.display();

    return 0;
}