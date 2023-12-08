#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include <conio.h>
using namespace std;

class bMoney
{
private:
    const int SIZE = 20;
    long double business_money;
    char money_string[20];
public:
    bMoney()
    {
        business_money = 0.00;
    }

    long double mstold(char ms[])
    {
        long double ret_val = 123.00;
        return ret_val;
    }

    void setMoney(char ms[])
    {
        business_money = mstold(ms);
    }

     // This function displays the value of variable called "money" in the required format
    void display()
    {
        cout << setiosflags(ios::fixed)
             << setiosflags(ios::showpoint)
             << setprecision(2)
             << setw(17)
             << business_money << endl;
    }
};
int main()
{
    bMoney myMoney;
        
    while (1)
    {
        myMoney.setMoney("$123,456,789,012,345.99");
        myMoney.display();

        cout << "Enter \'Q\' to quit.\nPress any other key to continue...";
        char choice = getchar();
        cin.ignore();
        if (choice == 'q' || choice == 'Q')
        {
            break;
        }
        else
        {
            continue;
        }
    }
    return 0;
}