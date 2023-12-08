#include <iostream>
using namespace std;

struct Time{
    int hours;
    int minutes;
    int seconds;
};


int main()
{
    Time time1,time2,sum;
    long totalSeconds;

    cout << "Enter hours :";
    cin >> time1.hours;
    cout << "Enter minutes :";
    cin>> time1.minutes;
    cout << "Enter seconds :";
    cin >> time1.seconds;

    cout << "\nEnter hours :";
    cin >> time2.hours;
    cout << "Enter minutes :";
    cin>> time2.minutes;
    cout << "Enter seconds :";
    cin >> time2.seconds;
    
    totalSeconds = (time1.hours+time2.hours)*3600 + (time1.minutes+time2.minutes)*60 + 
                    (time1.seconds+time2.seconds);
    
    sum.hours = totalSeconds/3600;
    sum.minutes = (totalSeconds%3600)/60;
    sum.seconds = totalSeconds%60;

    cout << "\nTotal time :" << sum.hours << ":" << sum.minutes << ":" << sum.seconds << endl;

    return 0;
}