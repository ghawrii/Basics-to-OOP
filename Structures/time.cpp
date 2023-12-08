#include <iostream>
using namespace std;

struct Time{
    int hours;
    int minutes;
    int seconds;
};

int main()
{   
    Time time1;
    long totalSeconds;

    cout << "Enter hours :";
    cin >> time1.hours;
    cout << "Enter minutes :";
    cin>> time1.minutes;
    cout << "Enter seconds :";
    cin >> time1.seconds;
    
    totalSeconds = time1.hours*3600 + time1.minutes*60 + time1.seconds;
    cout << "Total number of seconds :" << totalSeconds << endl;
    
    return 0;
}