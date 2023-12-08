#include <iostream>
using namespace std;

struct date{
    int day;
    int month;
    int year;
};

int main()
{
    char dummy='a';
    date myDate;

    cout << "Enter a date in the dd/mm/yyyy format :";
    cin >> myDate.day >> dummy >> myDate.month >> dummy >> myDate.year;

    cout << "The date you enetered is :" << myDate.day << "/" << myDate.month << "/" << myDate.year
    << endl;
    return 0;
}