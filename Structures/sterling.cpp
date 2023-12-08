#include <iostream>
using namespace std;

struct Sterling {
    int pounds;
    int shillings;
    int pence;
};

int main()
{
    Sterling poundSterling;
    float decimalPounds;

    cout << "Enter the amount in decimal pounds :";
    cin >> decimalPounds;

    poundSterling.pounds = decimalPounds;
    poundSterling.shillings = (decimalPounds - poundSterling.pounds) / 0.05;
    poundSterling.pence = int(decimalPounds/0.05/0.083) % 12;

    cout << poundSterling.pounds << "." << poundSterling.shillings << "." << poundSterling.pence << endl;
    return 0;
}