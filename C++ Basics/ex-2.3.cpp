#include <iostream>
using namespace std;

int main()
{
    // Using integer constant to declare and initialize num
    int num = 10;
    cout << num << endl;

    // Using arithmetic assignment operator to generate 20
    num += num; 
    cout << num << endl;

    // Using decrement operator to generate 19
    num--; 
    cout << num << endl;
    
    return 0;
}