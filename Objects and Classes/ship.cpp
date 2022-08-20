#include <iostream>
using namespace std;

class Angle
{
private:
    int degrees;
    float minutes;
    char direction;

public:
    Angle() : degrees(0), minutes(0), direction('N')
    {
    }
    Angle(int deg, float min, char dir) : degrees(deg), minutes(min), direction(dir)
    {
    }
    void getValues()
    {
        cout << "Enter degrees :";
        cin >> degrees;
        cout << "Enter minutes :";
        cin >> minutes;
        cout << "Enter direction (N,S,E,W):";
        cin >> direction;
    }

    void display() const
    {
        cout << degrees << "\xF8" << minutes << "'" << direction << endl;
    }
};

class Ship
{
private:
    static int count;
    int number;
    Angle latitude;
    Angle longitude;

public:
    Ship()
    {
        count++;
        number = count;
    }

    void getPosition()
    {
        cout << "Enter Longitude for Ship No." << number << "..." << endl;
        longitude.getValues();
        cout << "Enter Latitude for Ship NO." << number << "..." << endl;
        latitude.getValues();
    }

    void displayPosition()
    {
        cout << "Ship No." << number << endl;
        cout << "Longitude :";
        longitude.display();
        cout << "Latitude :";
        latitude.display();
    }
};

int Ship::count = 0;

int main()
{
    Ship ship1, ship2, ship3;

    ship1.getPosition();
    ship2.getPosition();
    ship3.getPosition();

    ship1.displayPosition();
    ship2.displayPosition();
    ship3.displayPosition();

    return 0;
}