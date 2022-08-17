#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Initializes the objects to 0 values
    Time() : hours(0), minutes(0), seconds(0) {}
    // Intializes the objects to fixed values
    Time(int hrs, int min, int sec) : hours(hrs), minutes(min), seconds(sec) {}

    // Displays the calling object in HH:MM:SS format
    void displayTime() const
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    // Takes two 'Time' objects as argument and stores their sum in the calling object
    void addTime(Time t1, Time t2)
    {
        // Adding seconds
        seconds = t1.seconds + t2.seconds;
        // Checking for value overflows
        if (seconds > 60)
        {
            minutes += seconds / 60;
            seconds = seconds % 60;
        }

        // Adding minutes
        minutes += t1.minutes + t2.minutes;
        // Checking for value overflows
        if (minutes > 60)
        {
            hours += minutes / 60;
            minutes = minutes % 60;
        }

        // Adding hours
        hours += t1.hours + t2.hours;
    }
};

int main()
{
    Time t1(3, 34, 45), t2(4, 23, 54), t3;

    t3.addTime(t1, t2);

    cout << "The sum of durations you eneted is :";
    t3.displayTime();
    return 0;
}