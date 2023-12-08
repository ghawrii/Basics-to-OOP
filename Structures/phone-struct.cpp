#include <iostream>
using namespace std;

// Structure definition
struct phone
{
    int area;
    int exchange;
    int number;
};

int main()
{
    phone phone1, phone2;

    phone1.area = 212;
    phone1.exchange = 767;
    phone1.number = 8900;

    cout << "Enter your area code, exchange, and number :";
    cin >> phone2.area >> phone2.exchange >> phone2.number;

    cout << "My number is (" << phone1.area << ") " << phone1.exchange << "-" << phone1.number << endl;
    cout << "Your number is (" << phone2.area << ") " << phone2.exchange << "-" << phone2.number << endl;

    return 0;
}