#include <iostream>
using namespace std;

class Employee
{
private:
    int employee_no;
    float compensation;

public:
    // Constructors 
    Employee(): employee_no(0), compensation(0) {}
    Employee(int emp_no,float comp): employee_no(emp_no), compensation(comp) {}

    // Setters
    // Sets both data members at the same time to the values passed as argument
    void setValues(int emp,float comp)
    {
        employee_no = emp;
        compensation = comp;
    }
    // Sets employee_no to emp
    void setEmpNo(int emp)
    {
        employee_no = emp;
    }
    // Sets compensation to comp
    void setComp(float comp)
    {
        compensation = comp;
    }

    // Prompts the user to enter values and sets the vars to those values
    void takeInput()
    {
        cout << "Enter employee_no. ";
        cin >> employee_no;
        cout << "Enter compensation :";
        cin >> compensation;
    }
    // Displays the calling object's data members in a human readable format
    void display() const
    {
        cout << "Employee No." << employee_no << endl;
        cout << "Compensation :" << compensation << endl;
    }
};

int main()
{
    Employee emp1,emp2,emp3;
    
    emp1.takeInput();
    emp2.takeInput();
    emp3.takeInput();

    emp1.display();
    emp2.display();
    emp3.display();

    return 0;
}