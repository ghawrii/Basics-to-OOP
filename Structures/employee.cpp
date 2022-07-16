#include <iostream>
using namespace std;


struct Employee{
    int number;
    float compensation;
};


int main()
{
    Employee emp1,emp2,emp3;
    cout << "Enter employee number :";
    cin >> emp1.number;
    cout << "Enter employee compensation :";
    cin >> emp1.compensation;

    cout << "Enter employee number :";
    cin >> emp2.number;
    cout << "Enter employee compensation :";
    cin >> emp2.compensation;

    cout << "Enter employee number :";
    cin >> emp3.number;
    cout << "Enter employee compensation :";
    cin >> emp3.compensation;

    cout << "Employee No." << emp1.number << "\t\tCompensation :" << emp1.compensation << endl;
    cout << "Employee No." << emp2.number << "\t\tCompensation :" << emp2.compensation << endl;
    cout << "Employee No." << emp3.number << "\t\tCompensation :" << emp3.compensation << endl;

    return 0;
}