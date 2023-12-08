#include <iostream>
using namespace std;

int main()
{
    int chairs = 0, guests = 0, arrangements = 1;

    cout << "Enter numbers of chairs :";
    cin >> chairs;
    cout << "Enter numbers of guests :";
    cin >> guests;

    for (int i = 0; i < chairs; i++)
    {
        arrangements = arrangements * guests;
        guests--;
    }
    cout << arrangements << endl;
    return 0;
}