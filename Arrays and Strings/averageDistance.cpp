#include <iostream>
#include <conio.h>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0)
    {
    }
    // Prompts and gets the data from the user
    void getdist()
    {
        cout << "\n     Enter feet :";
        cin >> feet;
        cout << "     Enter inches :";
        cin >> inches;
    }

    // Displays the distance in a human readable format
    void showdist()
    {
        cout << feet << "\'-" << inches << '\"';
    }
    void addDist(Distance);
    void divDist(Distance, int);
};

// Takes a Distance object as argument
// adds its values to the corresponding members of the calling Distance object
void Distance::addDist(Distance d2)
{
    inches += d2.inches;
    if (inches >= 12.0)
    {
        inches -= 12;
        feet++;
    }
    feet += d2.feet;
}

// Takes a Distance object & an int as an arg
// Divides Distance by the int and stores the result in the calling object
void Distance::divDist(Distance d2, int divisor)
{
    float fltfeet = d2.feet + d2.inches / 12.0;
    fltfeet /= divisor;
    feet = int(fltfeet);
    inches = (fltfeet - feet) * 12.0;
}

int main()
{
    const int TOTAL_DISTANCES = 100;
    Distance distances[TOTAL_DISTANCES], sum, avg;
    int count = 0;

    // Taking input from the user
    for (int i = 0; i < TOTAL_DISTANCES; i++)
    {
        cout << "Enter data for Distance No." << i + 1 << endl;
        distances[i].getdist();
        count++;
        char choice;
        cout << "Press \'Y\' to enter more data...\nPress any other key to stop...";
        cin.ignore();
        choice = getche();
        if (choice == 'Y' || choice == 'y')
        {
            cout << endl;
            system("clear");
            continue;
        }
        else
        {
            cout << endl << "Quitting" << endl;
            break;
        }
    }

    // Adding up all the distances user entered
    for (int i = 0; i < count; i++)
    {
        sum.addDist(distances[i]);
    }

    // Taking their average 
    avg.divDist(sum, count);

    // Showing the result
    cout << "The average of all the distances you entered is :";
    avg.showdist();
    cout << endl;

    return 0;
}