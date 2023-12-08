#include <iostream>
#include <conio.h>
using namespace std;

struct date
{
    int day;
    int month;
    int year;
};

enum etype
{
    laborer,
    secretary,
    manager,
    accountant,
    executive,
    researcher
};

struct Employee
{
    int number;
    float compensation;
    date date_of_employment;
    etype type;
};

int main()
{
    char dummy, choice;
    Employee emp1, emp2, emp3;

    // Taking input for the first employee
    cout << "Enter employee number :";
    cin >> emp1.number;
    cout << "Enter employee compensation :";
    cin >> emp1.compensation;
    cout << "Enter date of first employment in the dd/mm/yyyy format :";
    cin >> emp1.date_of_employment.day >> dummy >> emp1.date_of_employment.month >> dummy >> emp1.date_of_employment.year;
    cout << "Enter employee type (first letter only)\nlaborer, secretary, manager," << endl;
    cout << "accountant, executive, researcher :";
    cin.ignore();
    choice = getche();
    switch (choice)
    {
    case 'l':
        emp1.type = laborer;
        break;
    case 's':
        emp1.type = secretary;
        break;
    case 'm':
        emp1.type = manager;
        break;
    case 'a':
        emp1.type = accountant;
        break;
    case 'e':
        emp1.type = executive;
        break;
    case 'r':
        emp1.type = researcher;
        break;
    default:
        cout << "Invalid input...\nQuitting..." << endl;
        break;
    }
    cout << endl;

    // Taking input for second employee
    cout << "Enter employee number :";
    cin >> emp2.number;
    cout << "Enter employee compensation :";
    cin >> emp2.compensation;
    cout << "Enter date of first employment in the dd/mm/yyyy format :";
    cin >> emp2.date_of_employment.day >> dummy >> emp2.date_of_employment.month >> dummy >> emp2.date_of_employment.year;
    cout << "Enter employee type (first letter only)\nlaborer, secretary, manager," << endl;
    cout << "accountant, executive, researcher :";
    cin.ignore();
    choice = getche();
    switch (choice)
    {
    case 'l':
        emp2.type = laborer;
        break;
    case 's':
        emp2.type = secretary;
        break;
    case 'm':
        emp2.type = manager;
        break;
    case 'a':
        emp2.type = accountant;
        break;
    case 'e':
        emp2.type = executive;
        break;
    case 'r':
        emp2.type = researcher;
        break;
    default:
        cout << "Invalid input...\nQuitting..." << endl;
        break;
    }
    cout << endl;

    // Taking input for third employee
    cout << "Enter employee number :";
    cin >> emp3.number;
    cout << "Enter employee compensation :";
    cin >> emp3.compensation;
    cout << "Enter date of first employment in the dd/mm/yyyy format :";
    cin >> emp3.date_of_employment.day >> dummy >> emp3.date_of_employment.month >> dummy >> emp3.date_of_employment.year;
    cout << "Enter employee type (first letter only)\nlaborer, secretary, manager," << endl;
    cout << "accountant, executive, researcher :";
    cin.ignore();
    choice = getche();
    switch (choice)
    {
    case 'l':
        emp3.type = laborer;
        break;
    case 's':
        emp3.type = secretary;
        break;
    case 'm':
        emp3.type = manager;
        break;
    case 'a':
        emp3.type = accountant;
        break;
    case 'e':
        emp3.type = executive;
        break;
    case 'r':
        emp3.type = researcher;
        break;
    default:
        cout << "Invalid input...\nQuitting..." << endl;
        break;
    }
    cout << endl;

    // Displaying info for employee no.1
    cout << "\nEmployee No." << emp1.number << "\nCompensation :" << emp1.compensation << endl;
    cout << "Date of first employement :" << emp1.date_of_employment.day << "/" << emp1.date_of_employment.month << "/" << emp1.date_of_employment.year << endl;
    switch (emp1.type)
    {
    case 0:
        cout << "The employee type is laborer." << endl;
        break;
    case 1:
        cout << "The employee type is secretary." << endl;
        break;
    case 2:
        cout << "The employee type is manager." << endl;
        break;
    case 3:
        cout << "The employee type is accountant." << endl;
        break;
    case 4:
        cout << "The employee type is executive." << endl;
        break;
    case 5:
        cout << "The employee type is researcher." << endl;
        break;

    default:
        break;
    }

    // Displaying info for employee no.2
    cout << "\nEmployee No." << emp2.number << "\nCompensation :" << emp2.compensation << endl;
    cout << "Date of first employement :" << emp2.date_of_employment.day << "/" << emp2.date_of_employment.month << "/" << emp2.date_of_employment.year << endl;
    switch (emp2.type)
    {
    case 0:
        cout << "The employee type is laborer." << endl;
        break;
    case 1:
        cout << "The employee type is secretary." << endl;
        break;
    case 2:
        cout << "The employee type is manager." << endl;
        break;
    case 3:
        cout << "The employee type is accountant." << endl;
        break;
    case 4:
        cout << "The employee type is executive." << endl;
        break;
    case 5:
        cout << "The employee type is researcher." << endl;
        break;

    default:
        break;
    }

    // Displaying info for employee no.3
    cout << "\nEmployee No." << emp3.number << "\nCompensation :" << emp3.compensation << endl;
    cout << "Date of first employement :" << emp3.date_of_employment.day << "/" << emp3.date_of_employment.month << "/" << emp3.date_of_employment.year << endl;
    switch (emp3.type)
    {
    case 0:
        cout << "The employee type is laborer." << endl;
        break;
    case 1:
        cout << "The employee type is secretary." << endl;
        break;
    case 2:
        cout << "The employee type is manager." << endl;
        break;
    case 3:
        cout << "The employee type is accountant." << endl;
        break;
    case 4:
        cout << "The employee type is executive." << endl;
        break;
    case 5:
        cout << "The employee type is researcher." << endl;
        break;

    default:
        break;
    }
    return 0;
}