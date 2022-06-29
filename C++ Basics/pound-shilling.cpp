#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declaring variables
    float pound, shilling, pence;
    
    // Taking input
    cout << "Pounds :";
    cin >> pound;
    cout << "Shilling :";
    cin >> shilling;
    cout << "Pence :";
    cin >> pence;

    // Calculating 
    shilling = shilling * 0.05;
    pence = pence * 0.05 * 0.0833;  
    float decimalPound = pound + shilling + pence;

    // Showing result
    cout << "Decimal Pounds :" << fixed << setprecision(2) << decimalPound << endl;

    return 0;
}