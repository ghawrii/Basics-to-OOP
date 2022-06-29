#include <iostream>
using namespace std;

int main()
{
    double dollars, pounds = 1.487, deutchmark = 0.584, yen = 0.00955, franc = 0.172;
    cout << "Please enter the amount in USD :";
    cin >> dollars;
    cout << "Francs :" << dollars / franc << endl;
    cout << "Deutchmarks :" << dollars / deutchmark << endl;
    cout << "Yen :" << dollars / yen << endl;
    cout << "Pounds :" << dollars / pounds << endl;

    return 0;
}