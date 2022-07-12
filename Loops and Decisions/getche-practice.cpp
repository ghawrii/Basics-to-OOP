#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char ch = 'c';
    int number = 0;
    cout << "Enter a number :";
    for(int i =0; i < 6; i++)
    {
        ch = getche();
        number = (number*10) + (ch - '0');
    }

    cout << "\nNumber is :" << number << endl;
    return 0;
}

/*

int main()
{
    int chcount = 0;    // counts non-space characters
    int wdcount = 1;    // counts spaces between words
    char ch = 'a';      // ensure it isn’t ‘\r’
    
    cout << "Enter a phrase : ";
    while (ch != '\n')    // loop until Enter typed
    {
        ch = getche();  // read one character
        if (ch ==' ' )  // if it’s a space
            wdcount++;        // count a word
        else            // otherwise,
            chcount++;        // count a character
    }
    // display results
    cout << "\nWords =" << wdcount << endl
                        << "Letters =" << (chcount - 1) << endl;
    return 0;
}
*/