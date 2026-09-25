#include <iostream>
using namespace std;

class Number
{
    int a, b;

public:
    void input();
    void show();
};

// Function defined outside the class
void Number::input()
{
    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    // If you want default values when no value is provided,
    // initialize them as 0 before taking input.
}

void Number::show()
{
    cout << "Value of a = " << a << endl;
    cout << "Value of b = " << b << endl;
}

int main()
{
    Number n;

    n.input();
    n.show();

    return 0;
}