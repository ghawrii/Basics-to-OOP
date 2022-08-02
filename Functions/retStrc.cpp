#include <iostream>
using namespace std;

// Struct definition
struct Distance {
    int feet;
    float inches;
};

// Function declaration
Distance larger(Distance d1,Distance d2);
void dispDistance(Distance d1);

int main()
{
    Distance d1,d2;

    // Intializing first Distance
    cout << "Enter feet :";
    cin >> d1.feet;
    cout << "Enter inches :";
    cin >> d1.inches;

    // Intializing second Distance    
    cout << "Enter feet :";
    cin >> d2.feet;
    cout << "Enter inches :";
    cin >> d2.inches;

    // Displaying results 
    cout << "The larger distance of the two you entered is :"; 
    dispDistance(larger(d1,d2));
    
    return 0;
}

// Takes two structs of type Distance as arguments
// Returns the larger of the two and a dummy 'Distance' intitialized to 0 in case both are equal
Distance larger(Distance d1,Distance d2)
{
    if (d1.feet > d2.feet)
    {
        return d1;
    }
    else if(d2.feet > d1.feet)
    {
        return d2;
    }
    else
    {
        if(d1.inches > d2.inches)
        {
            return d1;
        }else if(d2.inches > d1.inches)
        {
            return d2;
        }
        else
        {
            Distance temp;
            temp.feet = 0;
            temp.inches = 0;
            return temp; // Return a dummy Distance = 0 if both given are equal
        }
    }
}

// Displays instances of 'Distance' in readable format
void dispDistance(Distance d1)
{
    cout << d1.feet<< "\'-" << d1.inches << "\"" << endl;
}