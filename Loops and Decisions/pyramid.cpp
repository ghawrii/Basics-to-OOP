#include <iostream>
using namespace std;

int main()
{
    int height = 0;
    cout << "Enter the height of the pyramid you want to print :";
    cin >> height;
    // This loop will print a line at each iteration 
    for (int i = 1; i <= height; i++)
    {
        // Calculates and prints the required number of spaces in each line
        for(int spaces = 0; spaces < (height - i); spaces++)
        {
            cout << " ";
        }
        // Calculates and prints the required number of crosses in each line
        for(int crosses=0; crosses < (i*2) - 1;crosses++)
        {
            cout << "X";
        }
        cout << endl;
    }
    return 0;
}