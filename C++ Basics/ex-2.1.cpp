#include <iostream>
using namespace std;

int main()
{
    // Declaring variables
    float gallons = 0, cubic_feet = 0;
    
    // Taking input
    cout << "Please enter the number of gallons :";
    cin >> gallons;

    // Calculating cubic_feet 
    cubic_feet = gallons/7.481;

    // Showing output
    cout << gallons << " gallons are equivalent to " << cubic_feet << " cubic feet." << endl;

    return 0; 
}