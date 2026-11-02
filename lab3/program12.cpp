
#include <iostream>
using namespace std;

// Function to calculate area of Circle
double area(double radius)
{
    return 3.14 * radius * radius;
}

// Function to calculate area of Rectangle
double area(double length, double width)
{
    return length * width;
}

// Function to calculate area of Square
double area(int side)
{
    return side * side;
}

// Function to calculate area of Triangle
double area(double base, double height, bool triangle)
{
    return 0.5 * base * height;
}

int main()
{
    double radius, length, width, base, height;
    int side;

    // Circle
    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of Circle = " << area(radius) << endl;

    // Rectangle
    cout << "\nEnter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of Rectangle = " << area(length, width) << endl;

    // Square
    cout << "\nEnter side of square: ";
    cin>>side;
    cout << "Area of Square = " << area(side) << endl;

    // Triangle
    cout << "\nEnter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle = " << area(base, height, true) << endl;

    return 0;
}
