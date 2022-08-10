#include <iostream>
using namespace std;

// Struct Declaration
struct Time{
    int hours;
    int minutes;
    int seconds;
};

// Function Declarations
void swap(Time&, Time&);
inline void displayTime(Time&);

int main()
{
    // Declaring 'Time' structs
    Time time1, time2;

    // Taking inputs 
    cout << "Enter hours :";
    cin >> time1.hours;
    cout << "Enter minutes :";
    cin>> time1.minutes;
    cout << "Enter seconds :";
    cin >> time1.seconds;

    cout << "\nEnter hours :";
    cin >> time2.hours;
    cout << "Enter minutes :";
    cin>> time2.minutes;
    cout << "Enter seconds :";
    cin >> time2.seconds;

    // Displaying values before swapping
    cout << "\nBefore swapping...\n";
    cout << "Time1 = " ; displayTime(time1);
    cout << "Time2 = " ; displayTime(time2);

    // Swapping 
    swap(time1,time2);

    // Displaying values after swapping
    cout << "\nAfter swapping...\n";
    cout << "Time1 = " ; displayTime(time1);
    cout << "Time2 = " ; displayTime(time2);
    
    return 0;
}

// Functions Definitions

// Takes two 'Time' structs as input by reference 
// and swaps their values 
void swap(Time& time1, Time& time2)
{
    Time temp;
    temp = time1;
    time1 = time2;
    time2 = temp;
}

// Displays the values of 'Time' struct in human readable format
inline void displayTime(Time& time1)
{
    cout << time1.hours << ":" << time1.minutes << ":" << time1.seconds << endl;
}