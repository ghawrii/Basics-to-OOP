#include <iostream>
using namespace std;

class Serial
{
private:
    static int count;
    int serial_number;

public:
    // Increments static count and assigns serial number to the calling object
    Serial()
    {
        count++;
        serial_number = count;
    }

    void displaySerial()
    {
        cout << "I am object no." << serial_number << endl;
    }
};
// Can't be intialized inside class
int Serial::count = 0;

int main()
{
    Serial obj1, obj2, obj3;

    obj1.displaySerial();
    obj2.displaySerial();
    obj3.displaySerial();
    
    return 0;
}