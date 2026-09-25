#include <iostream>
using namespace std;

int main()
{
    float salary = 50000;

    // newSalary is a reference to salary
    float &newSalary = salary;

    newSalary = newSalary + (newSalary * 10 / 100);

    cout << "Salary after 10% increase: " << salary << endl;

    return 0;
}