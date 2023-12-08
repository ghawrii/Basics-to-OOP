#include <iostream>
#include <conio.h>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction() : numerator(0), denominator(0)
    {
    }

    // Prompts the user to enter a fraction in a/b format and stores it in the relevant vars
    void getFraction()
    {
        char dummy;
        cout << "Enter a fraction in a/b format :";
        cin >> numerator >> dummy >> denominator;
    }

    // Displays the calling object's data in a/b format
    void showFraction()
    {
        cout << numerator << "/" << denominator << endl;
    }

    // Takes a  Fraction as arg and adds it to the calling Fraction and returns the resulting Fraction
    Fraction add(Fraction f2)
    {
        Fraction temp;
        temp.numerator = numerator * f2.denominator + f2.numerator * denominator;
        temp.denominator = denominator * f2.denominator;
        return temp;
    }
};

int main()
{
    Fraction f1, f2, result;
    while (1)
    {
        // Taking input
        f1.getFraction();
        f2.getFraction();
        // Adding and storing result in 'result'
        result = f1.add(f2);
        // Displaying result
        result.showFraction();

        // Checking whether user wants to quit or not
        cout << "Press \'Q\' to quit...\nPress any other key to continue...";
        char choice;
        cin.ignore();
        choice = getch();
        if (choice == 'Q' || choice == 'q')
        {
            cout << endl
                 << endl;
            break;
        }
        else
        {
            cout << endl
                 << endl;
            continue;
        }
    }
    return 0;
}