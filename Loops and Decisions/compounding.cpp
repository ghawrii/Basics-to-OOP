#include <iostream>
using namespace std;

int main()
{
    float amount = 0, years = 0, interest = 0;
    cout << "Enter initial amount:";
    cin >> amount;
    cout << "Enter number of years:";
    cin >> years;
    cout << "Enter interest rate (percent per year):";
    cin >> interest;
    interest = interest / 100;

    for (int i = 0; i < years; i++)
    {
        amount = amount + (amount * interest);
    }

    cout << "At the end of 10 years, you will have " << amount << " dollars." << endl;
    return 0;
}