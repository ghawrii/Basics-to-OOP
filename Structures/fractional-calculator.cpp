#include <iostream>
using namespace std;

struct Fraction
{
    int numerator;
    int denominator;
};

int main()
{
    Fraction fraction1,fraction2,sum;
    char dummy, operation;
    while (1)
    {
        cout << "Please enter the fractional operation you want to perform (e.g 1/2*3/4) :";
        cin >> fraction1.numerator >> dummy >> fraction1.denominator >> operation >> fraction2.numerator >> dummy >> fraction2.denominator;
        switch (operation)
        {
        case '+':
            sum.numerator = (fraction1.numerator * fraction2.denominator) + (fraction2.numerator * fraction1.denominator);
            sum.denominator = fraction1.denominator * fraction2.denominator;
            cout << sum.numerator << dummy << sum.denominator << endl;
            break;
        case '-':
            sum.numerator = (fraction1.numerator * fraction2.denominator) - (fraction2.numerator * fraction1.denominator);
            sum.denominator = fraction1.denominator * fraction2.denominator;
            cout << sum.numerator << dummy << sum.denominator << endl;
            break;
        case '*':
            sum.numerator = (fraction1.numerator * fraction2.numerator);
            sum.denominator = (fraction1.denominator * fraction2.denominator);
            cout << sum.numerator << dummy << sum.denominator << endl;
            break;
        case '/':
            sum.numerator = (fraction1.numerator * fraction2.denominator);
            sum.denominator = (fraction1.denominator * fraction2.numerator);
            cout << sum.numerator << dummy << sum.denominator << endl;
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