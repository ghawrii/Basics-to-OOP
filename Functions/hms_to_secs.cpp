#include <iostream>
#include <conio.h>
using namespace std;

long hms_to_secs(int,int,int);

int main()
{
    while(1)
    {
        int hours = 0, minutes = 0, seconds = 0;
        
        cout << "Hours :";
        cin >> hours;
        cout << "Minutes :";
        cin >> minutes;
        cout << "Seconds :";
        cin >> seconds;

        cout << "The given time in seconds is :" << hms_to_secs(hours, minutes, seconds) << endl;
        
        char decision ;
        cout << "Press \'q\' to quit" << endl << "Any other key to continue...";
        cin.ignore();
        decision = getche();
        if(decision == 'q' || decision == 'Q')
        {
            cout << endl;
            break;
        }
        else
        {
            cout << endl;
            continue;
        }
    }
    return 0;
}

long hms_to_secs(int hours,int minutes,int seconds)
{    
    long time = 0;
    time = (hours * 3600) + (minutes * 60) + seconds;
    return time;
}