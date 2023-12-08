#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d, numerator, denominator;
    char dummy, operation;
    while (1)
    {
        cout << "Please enter the fractional operation you want to perform (e.g 1/2*3/4) :";
        cin >> a >> dummy >> b >> operation >> c >> dummy >> d;
        switch (operation)
        {
        case '+':
            numerator = (a * d) + (c * b);
            denominator = b * d;
            cout << numerator << dummy << denominator << endl;
            break;
        case '-':
            numerator = (a * d) - (c * b);
            denominator = b * d;
            cout << numerator << dummy << denominator << endl;
            break;
        case '*':
            numerator = (a * c);
            denominator = (b * d);
            cout << numerator << dummy << denominator << endl;
            break;
        case '/':
            numerator = (a * d);
            denominator = (b * c);
            cout << numerator << dummy << denominator << endl;
            break;
        }

        char decision;
        cout << "Do you wish to continue (y/n)?";
        cin >> decision;
        if (decision == 'y' || decision == 'Y')
        {
            continue;
        }
        else
        {
            break;
        }
    }

    return 0;
}