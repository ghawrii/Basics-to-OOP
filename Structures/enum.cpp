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

int main()
{
    char choice;
    cout << "Enter employee type (first letter only)\nlaborer, secretary, manager," << endl;
    cout << "accountant, executive, researcher :";
    choice = getche();
    etype emp;
    switch (choice)
    {
    case 'l':
        emp = laborer;
        break;
    case 's':
        emp = secretary;
        break;
    case 'm':
        emp = manager;
        break;
    case 'a':
        emp = accountant;
        break;
    case 'e':
        emp = executive;
        break;
    case 'r':
        emp = researcher;
        break;
    default:
        cout << "Invalid input...\nQuitting..." << endl;
        break;
    }

    switch (emp)
    {
    case 0:
        cout << "\nThe employee type is laborer." << endl;
        break;
    case 1:
        cout << "\nThe employee type is secretary." << endl;
        break;
    case 2:
        cout << "\nThe employee type is manager." << endl;
        break;
    case 3:
        cout << "\nThe employee type is accountant." << endl;
        break;
    case 4:
        cout << "\nThe employee type is executive." << endl;
        break;
    case 5:
        cout << "\nThe employee type is researcher." << endl;
        break;

    default:
        break;
    }
    return 0;
}