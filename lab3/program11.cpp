#include <iostream>
using namespace std;

// Inline function
inline int add(int a, int b)
{
    return a + b;
}

// Default argument
int subtract(int a, int b = 0)
{
    return a - b;
}

// Function overloading
int multiply(int a, int b)
{
    return a * b;
}

double multiply(double a, double b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int main()
{
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "\nAddition = " << add(a, b);

    cout << "\nSubtraction = " << subtract(a, b);

    // Using default argument
    cout << "\nSubtraction with default argument = "
         << subtract(a);

    cout << "\nMultiplication = " << multiply(a, b);

    cout << "\nDivision = " << divide(a, b);

    return 0;
}