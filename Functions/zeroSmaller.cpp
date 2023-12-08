#include <iostream>
using namespace std;

void zeroSmaller(int &, int &);

int main()
{
    int num1 = 0, num2 = 0;
    
    cout << "Enter first number :";
    cin >> num1;
    cout << "Enter second number :";
    cin >> num2;
    
    zeroSmaller(num1,num2);
    cout << "num1 :" << num1 << endl << "num2 :" << num2 << endl;
    
    return 0;
}

void zeroSmaller(int &a, int &b)
{
    if (a > b)
    {
        b = 0;
    }
    else if (b > a)
    {
        a = 0;
    }
    else
    {
        return;
    }
}