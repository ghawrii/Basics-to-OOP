#include <iostream>
using namespace std;

int main()
{
    float amount = 0, initial_amount = 0, final_amount = 0, years = 0, interest = 0;
    cout << "Enter initial amount:";
    cin >> initial_amount;
    cout << "Enter final amount :";
    cin >> final_amount;
    cout << "Enter interest rate (percent per year):";
    cin >> interest;
    
    interest = interest / 100;
    amount = initial_amount;
    while (amount < final_amount)
    {
        amount = amount + (amount * interest);
        years++;
    }

    cout << "It will take " << years << " years for " << initial_amount << " to become " << final_amount
         << " at an interest rate of " << (interest * 100) << "%" << endl;
    return 0;
}