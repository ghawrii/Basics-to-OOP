#include <iostream>
using namespace std;

void swap(int &, int &);
int main()
{
    int a = 0, b = 0;
    cout << "Enter first number :";
    cin >> a;
    cout << "Enter second number :";
    cin >> b;
    cout << "a :" << a << "\t\t" << "b :" << b << endl;
    swap(a,b); 
    cout << "a :" << a << "\t\t" << "b :" << b << endl;

    return 0;
}

void swap(int &arg1, int &arg2)
{
    int temp = 0;
    temp = arg1;
    arg1 = arg2;
    arg2 = temp;
}