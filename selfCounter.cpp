#include <iostream>
using namespace std;

int COUNT = 0;

// Function Declarations
void globalCounter();
void staticCounter();

int main()
{
    // Calling global variable using function 10 times
    for(int i = 0; i < 10; i++)
    {
        globalCounter();
    }
    cout << endl;

    // Calling static variable using function 10 times
    for(int i = 0; i < 10; i++)
    {
        staticCounter();
    }

    return 0;
}
// Tracks and prints how many times it has been called using the global variable COUNT
void globalCounter()
{
    COUNT++;
    cout << "I have been globally called " << COUNT << " times." << endl;
}

// Tracks and prints how many times it has been called using the static variable 'counter'
void staticCounter()
{
    static int counter = 0;
    counter++;
    cout << "I have been statically called " << counter << " times." << endl;
}