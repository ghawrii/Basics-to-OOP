#include <iostream>
using namespace std;

// Declaration
float circarea(float radius);

int main()
{
    float radius;
    cout << "Enter radius of the circle :";
    cin >> radius;
    cout << "Area of the circle is :" << circarea(radius) << endl;
    return 0;
}

// Implementation
float circarea(float radius)
{
    float pi = 3.14;
    return pi * radius * radius;
}