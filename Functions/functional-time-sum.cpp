#include <iostream>
using namespace std;

// Struct Declaration
struct Time{
    int hours;
    int minutes;
    int seconds;
};

// Functions Declarations
long time_to_secs(Time);
Time secs_to_time(long);


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

    totalSeconds = time_to_secs(time1) + time_to_secs(time2);
    sum = secs_to_time(totalSeconds);
    
    cout << "\nTotal time :" << sum.hours << ":" << sum.minutes << ":" << sum.seconds << endl;

    return 0;
}

long time_to_secs(Time hms)
{   
    long secs = 0;
    secs = (hms.hours*3600) + (hms.minutes*60) + hms.seconds;
    return secs;
}

Time secs_to_time(long secs)
{
    Time hms;
    hms.hours = secs / 3600;
    secs %= 3600;
    hms.minutes = secs / 60;
    secs %= 60;
    hms.seconds = secs;
    return hms;
}