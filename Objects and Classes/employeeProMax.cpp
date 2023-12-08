#include <iostream>
#include <conio.h>
using namespace std;

enum etype
{
    laborer,
    secretary,
    manager,
    accountant,
    executive,
    researcher
};

class Date
{
private:
    int month;
    int day;
    int year;

public:
    Date() : month(9), day(11), year(2001) {}
    void getDate()
    {
        char dummy;
        cout << "Enter date (in MM/DD/YYYY format):";
        cin >> month >> dummy >> day >> dummy >> year;
    }

    void showdate() const
    {
        cout << month << "/" << day << "/" << year << endl;
    }
};

class Employee
{
private:
    int employee_no;
    float compensation;
    Date date_of_employment;
    etype type;

public:
    Employee() : employee_no(0), compensation(0) {}
    Employee(int emp_no, float comp) : employee_no(emp_no), compensation(comp) {}

    // Setters
    // Sets both data members at the same time to the values passed as argument
    void putEmploy(int en,float comp,Date dt,etype tp)
    {
        employee_no = en;
        compensation = comp;
        date_of_employment = dt;
        type = tp;
    }

    // Prompts the user to enter values and sets the vars to those values
    void getEmploy()
    {
        cout << "Enter employee_no. ";
        cin >> employee_no;
        cout << "Enter compensation :";
        cin >> compensation;
        cout << "Enter date of first employment in the dd/mm/yyyy format :";
        date_of_employment.getDate();
        cout << "Enter employee type (first letter only)\nlaborer, secretary, manager," << endl;
        cout << "accountant, executive, researcher :";
        char choice;
        cin.ignore();
        choice = getche();
        switch (choice)
        {
        case 'l':
            type = laborer;
            break;
        case 's':
            type = secretary;
            break;
        case 'm':
            type = manager;
            break;
        case 'a':
            type = accountant;
            break;
        case 'e':
            type = executive;
            break;
        case 'r':
            type = researcher;
            break;
        default:
            cout << "Invalid input...\nQuitting..." << endl;
            break;
        }
        cout << endl << endl;
    }
    // Displays the calling object's data members in a human readable format
    void display() const
    {
        cout << "Employee No." << employee_no << endl;
        cout << "Compensation :" << compensation << endl;
        cout << "Date of employment :";
        date_of_employment.showdate();
        cout << "Employee type :";
        switch(type)
        {
            case 0:
                cout << "Laborer" << endl;
            case 1:
                cout << "Secretary" << endl;
            case 2:
                cout << "Manager" << endl;
            case 3:
                cout << "Accounntant" << endl;
            case 4:
                cout << "Executive" << endl;
            case 5:
                cout << "Researcher" << endl;
        }
        cout << endl;
    }
};

int main()
{
    Employee emp1, emp2,emp3;
    
    emp1.getEmploy();
    emp2.getEmploy();
    emp3.getEmploy();
    
    emp1.display();
    emp2.display();
    emp3.display();
    return 0;
}
