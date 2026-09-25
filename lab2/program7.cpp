#include <iostream>
using namespace std;

void updateSalary(float &salary)
{
    salary = salary + (salary * 10 / 100);
}

int main()
{
    float salary = 50000;

    updateSalary(salary);

    cout << "Salary after 10% increase using reference: "
         << salary << endl;

    return 0;
}