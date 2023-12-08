// Honestly, this proved to be toughest of the bunch
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declaring variables
    float decimalPounds;
    int pounds;
    float decFrac;

    // Taking input
    cout << "Enter decimal pounds :";
    cin >> decimalPounds;

    // Calculations vro!
    pounds = int(decimalPounds);
    decFrac = decimalPounds - pounds;
    int shillings = decFrac * 20;
    int pence = decFrac * 20 * 12;

    // Results
    cout << "Equivalent in old notation =" << pounds << "." << static_cast<int>(shillings) << "." << pence%12 << endl;
 
    return 0;
}