#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num, multiple;
    cout << "Please enter a nummber :";
    cin >> num;
    multiple = num;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << setw(10) << multiple;
            multiple += num;
        }
        cout << endl;
    }
    return 0;
}