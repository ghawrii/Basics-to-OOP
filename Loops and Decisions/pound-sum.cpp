#include <iostream>
using namespace std;

int main()
{
    int pound1, pound2, shilling1, shilling2, pence1, pence2;

    do
    {
        cout << "Enter first amount's....\nPounds :";
        cin >> pound1;
        cout << "Shillings :";
        cin >> shilling1;
        cout << "Pence :";
        cin >> pence1;

        cout << "Enter second amount's....\nPounds :";
        cin >> pound2;
        cout << "Shillings :";
        cin >> shilling2;
        cout << "Pence :";
        cin >> pence2;

        int penceSum, shilSum, poundSum;
        penceSum = pence1 + pence2;
        shilSum = shilling1 + shilling2;
        poundSum = pound1 + pound2;

        if (penceSum >= 12)
        {
            shilSum += penceSum / 12;
            penceSum = penceSum % 12;
        }

        if (shilSum >= 20)
        {
            poundSum += shilSum / 20;
            shilSum = shilSum % 20;
        }

        cout << "Total is " << poundSum << "." << shilSum << "." << penceSum << " pounds.";

        char decision;
        cout << "Do you wish to continue (y/n)?";
        cin >> decision;
        if(decision == 'y' || decision == 'Y')
        {
            continue;
        }
        else
        {
            break;
        }
    } while (1);

    return 0;
}