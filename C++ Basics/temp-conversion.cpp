#include <iostream>
using namespace std;

int main()
{
    double Celsius, Fahrenheit;
    cout << "Please enter temperature in Celsius :";
    cin >> Celsius;
    Fahrenheit = (Celsius * float(9.0 / 5.0)) + 32;
    cout << "Given temperature in Fahrenheit :" << Fahrenheit << endl;

    return 0;
}