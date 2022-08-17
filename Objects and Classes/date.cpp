#include <iostream>
using namespace std;

class Date
{
private:
    int month;
    int day;
    int year;

public:
    Date(): month(9),day(11),year(2001){}
    void getDate()
    {
        char dummy;
        cout << "Enter date (in MM/DD/YYYY format):";
        cin >> month >> dummy >> day >> dummy >> year;
    }

    void showdate()
    {
        cout << month << "/" << day << "/" << year << endl;
    }
};

int main()
{
    Date myDate;
    myDate.getDate();
    myDate.showdate();
    return 0;
}