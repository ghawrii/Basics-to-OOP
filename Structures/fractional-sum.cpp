#include <iostream>
using namespace std;

struct fraction{
    int numerator;
    int denominator;
};

int main()
{   
    // Declaring variables
    fraction fraction1, fraction2, result;
    char dummyChar;

    // Taking inputs
    cout << "Please enter first fraction :";
    cin >> fraction1.numerator >> dummyChar >> fraction1.denominator;
    cout << "Please enter second fraction :";
    cin >> fraction2.numerator >> dummyChar >> fraction2.denominator;
    
    // Calculating 
    result.numerator = (fraction1.numerator*fraction2.denominator) + (fraction2.numerator*fraction1.denominator);
    result.denominator = fraction1.denominator * fraction2.denominator;

    // Displaying result
    cout << result.numerator << dummyChar << result.denominator << endl;
    return 0;
}