#include <iostream>
using namespace std;

int main()
{
    // Declaring variables
    float a,b,c,d,numerator,denominator;
    char dummyChar;

    // Taking inputs
    cout << "Please enter first fraction :";
    cin >> a >> dummyChar >> b;
    cout << "Please enter second fraction :";
    cin >> c >> dummyChar >> d;
    
    // Calculating 
    numerator = (a*d) + (c*b);
    denominator = b * d;

    // Displaying result
    cout << numerator << dummyChar << denominator << endl;
    
    return 0;
}