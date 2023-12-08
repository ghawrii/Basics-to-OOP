#include <iostream>
using namespace std;

int main()
{
    float celsius = 0, fahrenheit = 0;
    while (1)
    {
        cout << "Press \'F\' to convert Celsius to Fahrenheit \n \t\t\t OR \n Press \'C\' to convert Fahrenheit to Celsius \n...";
        char check;
        cin >> check;
        if (check == 'F' || check == 'f')
        {
            cout << "Please enter temperatue in Celsius :";
            cin >> celsius;
            fahrenheit = (celsius * (9.0 / 5.0)) + 32;
            cout << "In Fahrenheit, the given temperature is :" << fahrenheit << endl;
            break;
        }
        else if (check == 'C' || check == 'c')
        {
            cout << "Please enter temperatue in Fahrenheit :";
            cin >> fahrenheit;
            celsius = (fahrenheit - 32) * (5.0 / 9.0);
            cout << "In Celsius, the given temperature is :" << celsius << endl;
            break;
        }
        else
        {
            cout << "Invalid input.\n Please try again..." << endl;
            continue;
        }
    }

    return 0;
}