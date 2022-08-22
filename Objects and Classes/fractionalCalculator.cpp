#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;
    static int count;
    int serial;

public:
    // Default constructor
    Fraction() : numerator(1), denominator(1)
    {
        count++;
        serial = count;
    }
    // Overloaded constructor: initializes data members to given values
    Fraction(int num, int denom) : numerator(num), denominator(denom)
    {
    }
    // Takes a Fraction object as argument, adds it to the calling Fraction object and
    // returns their sum as a separate Fraction object
    Fraction add(Fraction fraction2)
    {
        Fraction sum;
        sum.numerator = (numerator * fraction2.denominator) + (fraction2.numerator * denominator);
        sum.denominator = denominator * fraction2.denominator;
        sum.lowestTerms();
        return sum;
    }
    // Takes a Fraction object as argument, subtracts it from the calling Fraction object and
    // returns their difference as a separate Fraction object
    Fraction sub(Fraction fraction2)
    {
        Fraction difference;
        difference.numerator = (numerator * fraction2.denominator) - (fraction2.numerator * denominator);
        difference.denominator = denominator * fraction2.denominator;
        difference.lowestTerms();
        return difference;
    }
    // Takes a Fraction object as argument, multiplies it to the calling Fraction object and
    // returns their product as a separate Fraction object
    Fraction mul(Fraction fraction2)
    {
        Fraction product;
        product.numerator = (numerator * fraction2.numerator);
        product.denominator = (denominator * fraction2.denominator);
        product.lowestTerms();
        return product;
    }
    // Takes a Fraction object as argument, divides the calling object by it  and
    // returns the result of their division as a separate Fraction object
    Fraction div(Fraction fraction2)
    {
        Fraction div;
        div.numerator = (numerator * fraction2.denominator);
        div.denominator = (denominator * fraction2.numerator);
        div.lowestTerms();
        return div;
    }
    // Reduces the calling Fraction object's data members to their lowest form
    void lowestTerms()
    {
        long num, denom, temp, gcd;
        num = labs(numerator); // Use non-negative values
        denom = labs(denominator);
        if (denom == 0) // Check for n/0
        {
            cout << "Illegal fraction: division by 0";
            exit(1); // exit() does not call destructor for locally scoped objects, return does
        }
        else if (num == 0) // Check for 0/n
        {
            num = 0;
            denom = 1;
            return;
        }
        while (num != 0) // This loop finds the GCD of num and denom
        {
            if (num < denom) // ensure numerator is larger
            {
                // Swap them
                temp = num;
                num = denom;
                denom = temp;
            }
            // Subtract them
            num = num - denom;
        }
        gcd = denom; // This is the gcd
        numerator = numerator / gcd;
        denominator = denominator / gcd;
    }
    // Takes a Fraction object as argument and prints it in a human readable format
    inline void displayFraction() const
    {
        char dummy = '/';
        cout << endl << numerator << dummy << denominator << endl;
    }
    // Takes input from the user by prompting to enter a fraction a/b format
    inline void getFraction()
    {
        char dummy;
        cout << "Enter fraction no." << serial << " in a/b format :";
        cin >> numerator >> dummy >> denominator;
    }
};

int Fraction::count = 0;

int main()
{
    Fraction fraction1, fraction2, result;
    char dummy, operation;

    while (1)
    {
        // Getting fractions from the user
        fraction1.getFraction();
        fraction2.getFraction();
        // Getting the user's desired operation choice
        cout << "Enter the operation you want to perform (+,-,*,/):";
        cin.ignore();
        operation = getche();
        // Performing operation as per user's desire
        switch (operation)
        {
        case '+':
            result = fraction1.add(fraction2);
            result.displayFraction();
            break;
        case '-':
            result = fraction1.sub(fraction2);
            result.displayFraction();
            break;
        case '*':
            result = fraction1.mul(fraction2);
            result.displayFraction();
            break;
        case '/':
            result = fraction1.div(fraction2);
            result.displayFraction();
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