#include <iostream>
using namespace std;

int main()
{
    float salary = 50000;

    // Pointer stores the address of salary
    float *newSalary = &salary;

    // Update salary using pointer
    *newSalary = *newSalary + (*newSalary * 10 / 100);

    cout << "Salary after 10% increase: " << salary << endl;

    return 0;
}