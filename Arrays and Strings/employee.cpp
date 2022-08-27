#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class Employee
{
private:
    string name;
    long emp_no;

public:
    Employee() : name("Agent"), emp_no(47)
    {
    }
    void getData()
    {
        cout << "Name :";
        cin >> name;
        cout << "Employee No.";
        cin >> emp_no;
    }

    void putData()
    {
        cout << endl;
        cout << "Employee Name :" << name << endl;
        cout << "Employee No." << emp_no << endl;
    }
};

int main()
{
    const int MAX_EMPLOYEES = 100;
    Employee employees[MAX_EMPLOYEES];

    for (int i = 0; i < 100; i++)
    {
        cout << "Enter data for employee no." << i + 1 << endl;
        employees[i].getData();
        char choice;
        cout << "Press \'Y\' to enter more data...\nPress any other key to stop...";
        cin.ignore();
        choice = getche();
        if (choice == 'Y' || choice == 'y')
        {
            cout << endl;
            continue;
        }
        else
        {
            cout << endl;
            break;
        }
    }

    for (int i = 0; i < 100; i++)
    {
        employees[i].putData();
    }

    return 0;
}
