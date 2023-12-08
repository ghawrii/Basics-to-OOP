#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    cout << "Please enter a character :";
    char character;
    cin >> character;
    if(islower(character) == 0)
    {
        cout << "Uppercase" << endl;
    }
    else
    {
        cout << "Lowercase" << endl;
    }
    
    return 0;
}