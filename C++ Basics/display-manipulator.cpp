#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setiosflags(ios::left) << setfill('.') << setw(15) << "First Name";
    cout /*<< setiosflags(ios::left)*/ << setw(15) << "Last Name" << endl;

    return 0;
}