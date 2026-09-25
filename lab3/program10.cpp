#include <iostream>
using namespace std;

class Number
{
    int a, b;

public:
    inline void input();
    inline void show();
};

// Inline function defined outside the class
inline void Number::input()
{
    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;
}

// Inline function defined outside the class
inline void Number::show()
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