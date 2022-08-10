#include <iostream>
using namespace std;

// Struct declaration
struct Sterling
{
    int pounds;
    int shillings;
    int pence;
};

// Functions declarations
Sterling takeInput();
Sterling addSterling(Sterling amount1, Sterling amount2);
inline void displaySterling(Sterling amount);

int main()
{
    Sterling amount1 = takeInput();
    Sterling amount2 = takeInput();

    cout << "The sum of the two amounts you entered is =";
    displaySterling(addSterling(amount1, amount2));

    return 0;
}

// Takes a pound-sterling amount from the user as input and returns it in the form of a Sterling struct
Sterling takeInput()
{
    Sterling temp;
    cout << "\nEnter pounds :";
    cin >> temp.pounds;

    // Taking shillings and making sure they aren't more than 20
    cout << "Enter shillings :";
    cin >> temp.shillings;
    if (temp.shillings > 20)
    {
        temp.pounds += temp.shillings / 20;
        temp.shillings = temp.shillings % 20;
    }

    // Taking pence and making sure they aren't more than 12
    cout << "Enter pence :";
    cin >> temp.pence;
    if (temp.pence > 20)
    {
        temp.shillings += temp.pence / 12;
        temp.pence = temp.pence % 12;
    }

    return temp;
}

// Takes two 'Sterling' amounts as input and returns their sum
Sterling addSterling(Sterling amount1, Sterling amount2)
{
    Sterling sum;
    sum.pounds = amount1.pounds + amount2.pounds;
    
    // Adding shillings and making sure they aren't more than 20
    sum.shillings = amount1.shillings + amount2.shillings;
    if (sum.shillings > 20)
    {
        sum.pounds++;
        sum.shillings -= 20;
    }
    
    // Adding pence and making sure they aren't more than 12
    sum.pence = amount1.pence + amount2.pence;
    if (sum.pence > 12)
    {
        sum.shillings++;
        sum.pence -= 12;
    }

    return sum;
}

// Displays each amount in pound-sterling format
inline void displaySterling(Sterling amount)
{
    cout << amount.pounds << ":" << amount.shillings << ":" << amount.pence << endl;
}
