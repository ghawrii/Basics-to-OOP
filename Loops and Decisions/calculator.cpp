#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num1 = 0, num2 = 0;
    int result = 0;
    char operation = '+';
    while (1)
    {
        cout << "\nEnter first number, operator, second number :";
        cin >> num1 >> operation >> num2;
        switch (operation)
        {
            case '+':
                result = num1 + num2;
                cout << "Answer :" << result;
                break;

            case '-':
                result = num1 - num2;
                cout << "Answer :" << result;
                break;

            case '*':
                result = num1 * num2;
                cout << "Answer :" << result;
                break;

            case '/':
                result = num1 / num2;
                cout << "Answer :" << result;
                break;

            default:
                cout << "\nInvalid Operation...\nQuitting program...";
                return 0;
                break;
        }
        cout << "\nDo another? (y/n) :";
        char decision = 'a';
        cin.ignore();
        decision = getche();
        if(decision == 'y' ||decision == 'Y')
        {
            cout << "\n";
            continue;
        }
        else
        {
            break;
        }
    }
    return 0;
}