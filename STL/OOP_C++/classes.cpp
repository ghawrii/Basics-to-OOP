#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int age;
    bool gender;

public:
    // Default constructor
    Student()
    {
        this->name = "Mr. Nobody";
        this->age = 0;
        this->gender = 0;
    }
    // Parameterized constructor
    Student(string n, int a, bool g)
    {
        this->name = n;
        this->age = a;
        this->gender = g;
    }
    // Student(string n, int a, bool b) : name(n), age(a), gender(b)
    // {
    // }
    // Copy constructor
    Student(Student &t)
    {
        this->name = t.name;
        this->age = t.age;
        this->gender = t.gender;
    }
    void operator=(Student &t)
    {
        this->name = t.name;
        this->age = t.age;
        this->gender = t.gender;
    }
    // Destructor
    ~Student()
    {
        cout << "Destructor called" << endl;
    }

    // Setters
    void setName(string s)
    {
        this->name = s;
    }
    void setAge(int a)
    {
        this->age = a;
    }
    void setGender(bool b)
    {
        this->gender = b;
    }
    // Getters
    string getName()
    {
        return this->name;
    }
    int getAge()
    {
        return this->age;
    }
    bool getGender()
    {
        return gender;
    }
    // Operator Overloading
    bool operator==(Student &a)
    {
        if (this->name == a.name && this->age == a.age && this->gender == a.gender)
        {
            return true;
        }
    }
    // Prints the object calling this method
    void printObject()
    {
        cout << "Name :" << this->name << endl;
        cout << "Age :" << this->age << endl;
        cout << "Gender :" << (this->gender ? "Male" : "Female") << endl
             << endl;
    }
};

int main()
{
    Student Zaeem;
    Zaeem.printObject(); // Will print an empty string, 0 and 'false', the default values for each data type
    Zaeem.setName("Hafiz Muhammad Zaeem");
    Zaeem.setAge(25);
    Zaeem.setGender(true);
    Zaeem.printObject();

    Student Yashfa("Yashfa Zaeem", 21, false);
    Yashfa.printObject();

    Student Ahmed = Zaeem;
    Ahmed.printObject();
    if (Ahmed == Zaeem)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Not same" << endl;
    }
    Ahmed.setName("Whatever");

    Ahmed.printObject();
    Zaeem.printObject();

    // Dynamic Memory Allocation
    int *ptr1 = new int;
    int *ptr2 = new int[10];

    delete ptr1;
    delete[] ptr2;

    return 0;
}