#include <iostream>
using namespace std;

int main()
{
    int pound1, pound2, shilling1, shilling2, pence1, pence2;
    char operation;

    do
    {
        cout << "\nPlease enter the operation you want to perform...\n+ for Addition\n- for Subtraction\n*"
             << "for Multiplication." << endl;
        cin >> operation;

        // Addition Implementation
        if (operation == '+')
        {
            cout << "Enter first amount's....\nPounds :";
            cin >> pound1;
            cout << "Shillings :";
            cin >> shilling1;
            cout << "Pence :";
            cin >> pence1;

            cout << "\nEnter second amount's....\nPounds :";
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

            cout << "\nTotal is " << poundSum << "." << shilSum << "." << penceSum << " pounds.";
        }

        // Subtraction Implementation
        else if (operation == '-')
        {
            cout << "Enter first amount's....\nPounds :";
            cin >> pound1;
            cout << "Shillings :";
            cin >> shilling1;
            cout << "Pence :";
            cin >> pence1;

            cout << "\nEnter second amount's....\nPounds :";
            cin >> pound2;
            cout << "Shillings :";
            cin >> shilling2;
            cout << "Pence :";
            cin >> pence2;

            int poundDiff = 0, shilDiff = 0, penceDiff = 0;
            // Subtracting Pence
            if (pence1 >= pence2)
            {
                penceDiff = pence1 - pence2;
                if (penceDiff >= 12)
                {
                    shilDiff += penceDiff / 12;
                    penceDiff = penceDiff % 12;
                }
            }
            else if (pence1 < pence2)
            {
                pence1 += 12;
                shilling1--;
                penceDiff = pence1 - pence2;
                if (penceDiff >= 12)
                {
                    shilDiff += penceDiff / 12;
                    penceDiff = penceDiff % 12;
                }
            }

            // Subtracting Shillings
            if (shilling1 >= shilling2)
            {
                shilDiff = shilling1 - shilling2;
                if (shilDiff >= 20)
                {
                    poundDiff += shilDiff / 20;
                    shilDiff = shilDiff % 20;
                }
            }
            else if (shilling1 < shilling2)
            {
                shilling1 += 20;
                pound1--;
                shilDiff = shilling1 - shilling2;
                if (shilDiff >= 20)
                {
                    poundDiff += shilDiff / 20;
                    shilDiff = shilDiff % 20;
                }
            }
            poundDiff = pound1 - pound2;
            cout << "Answer :" << poundDiff << "." << shilDiff << "." << penceDiff << endl;
        }
        else if (operation == '*')
        {
            cout << "Enter your amount's....\nPounds :";
            cin >> pound1;
            cout << "Shillings :";
            cin >> shilling1;
            cout << "Pence :";
            cin >> pence1;

            int multiplier = 0;
            cout << "Enter the number you want to multiply it with :";
            cin >> multiplier;

            int poundProduct = 1, shilProduct = 1, penceProduct = 1;

            poundProduct = pound1 * multiplier;
            penceProduct = pence1 * multiplier;
            shilProduct = shilling1 * multiplier;
            
            if (penceProduct > 12)
            {
                shilProduct += (penceProduct / 12);
                penceProduct = (penceProduct % 12);
            }

            if (shilProduct > 20)
            {
                poundProduct += shilProduct / 20;
                shilProduct = shilProduct % 20;
            }

            cout << "Answer :" << poundProduct << "." << shilProduct << "." << penceProduct << endl;
        }
        else
        {
            cout << "Invalid input...\nQuitting program...\n"
                 << endl;
            return 0;
        }

        char decision;
        cout << "Do you wish to continue (y/n)?";
        cin >> decision;
        if (decision == 'y' || decision == 'Y')
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