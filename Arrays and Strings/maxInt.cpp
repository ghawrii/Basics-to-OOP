#include <iostream>
#include <conio.h>
using namespace std;

int maxInt(int[], int);

int main()
{
    const int TOTAL_INTEGERS = 100;

    // Declaring an array and setting all of its elements to 0
    int integers[TOTAL_INTEGERS] = {0};

    // Taking input from the user
    for (int i = 0; i < TOTAL_INTEGERS; i++)
    {
        cout << "Enter Integer No." << i + 1 << endl;
        cin >> integers[i];
        char choice;
        cout << "Continue...? (Y/N)";
        cin.ignore();
        choice = getche();
        if (choice == 'Y' || choice == 'y')
        {
            cout << endl;
            continue;
        }
        else
        {
            cout << endl
                 << "Quitting" << endl;
            break;
        }
    }

    // Showing results
    cout << "The largest integer of all the integers you entered is "
         << integers[maxInt(integers, TOTAL_INTEGERS)] << " and its index is "
         << maxInt(integers, TOTAL_INTEGERS) << endl;

    return 0;
}

// Takes an int array and its size as argument
// Returns the index of the largest integer in the array
int maxInt(int integers[], int size)
{
    int largest_index = 0;
    for (int i = 0; i < size; i++)
    {
        if (integers[largest_index] < integers[i])
        {
            largest_index = i;
        }
    }
    return largest_index;
}