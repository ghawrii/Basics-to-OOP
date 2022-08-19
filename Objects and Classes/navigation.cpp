#include <iostream>
#include <conio.h>
using namespace std;

class Angle
{
    private:
        int degrees;
        float minutes;
        char direction;
    public:
        Angle():degrees(0),minutes(0), direction('N')
        {}
        Angle(int deg, float min, char dir): degrees(deg), minutes(min), direction (dir)
        {}
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
            cout << degrees << "\xF8" << minutes << "'"  << direction << endl;
        }
};
int main()
{
    Angle myAngle(175,59.9,'E');
    myAngle.display();
    while(1)
    {
        myAngle.getValues();
        myAngle.display();   
        char choice;
        cout << "Enter \'Q\' to quit..." << endl << "Press any other key to continue...";
        cin.ignore();
        choice = getch();
        if(choice == 'Q' || choice == 'q')
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