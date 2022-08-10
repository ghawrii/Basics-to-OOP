#include <iostream>
using namespace std;

struct Fraction
{
    int numerator;
    int denominator;
};

Fraction fadd(Fraction, Fraction);
Fraction fsub(Fraction, Fraction);
Fraction fdiv(Fraction, Fraction);
Fraction fmul(Fraction, Fraction);
void displayFraction(Fraction);

int main()
{
    Fraction fraction1, fraction2, result, sum;
    char dummy, operation;

    while (1)
    {
        cout << "Please enter the fractional operation you want to perform (e.g 1/2*3/4) :";
        cin >> fraction1.numerator >> dummy >> fraction1.denominator >> operation >> fraction2.numerator >> dummy >> fraction2.denominator;
        switch (operation)
        {
        case '+':
            result = fadd(fraction1, fraction2);
            displayFraction(result);
            break;
        case '-':
            result = fsub(fraction1, fraction2);
            displayFraction(result);
            break;
        case '*':
            result = fmul(fraction1, fraction2);
            displayFraction(result);
            break;
        case '/':
            result = fdiv(fraction1, fraction2);
            displayFraction(result);
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

Fraction fadd(Fraction fraction1, Fraction fraction2)
{
    Fraction sum;
    sum.numerator = (fraction1.numerator * fraction2.denominator) + (fraction2.numerator * fraction1.denominator);
    sum.denominator = fraction1.denominator * fraction2.denominator;
    return sum;
}

Fraction fsub(Fraction fraction1, Fraction fraction2)
{
    Fraction difference;
    difference.numerator = (fraction1.numerator * fraction2.denominator) - (fraction2.numerator * fraction1.denominator);
    difference.denominator = fraction1.denominator * fraction2.denominator;
    return difference;
}
Fraction fmul(Fraction fraction1, Fraction fraction2)
{
    Fraction product;
    product.numerator = (fraction1.numerator * fraction2.numerator);
    product.denominator = (fraction1.denominator * fraction2.denominator);
    return product;
}
Fraction fdiv(Fraction fraction1, Fraction fraction2)
{
    Fraction div;
    div.numerator = (fraction1.numerator * fraction2.denominator);
    div.denominator = (fraction1.denominator * fraction2.numerator);
    return div;
}
void displayFraction(Fraction fraction)
{
    char dummy = '/';
    cout << fraction.numerator << dummy << fraction.denominator << endl;
}
