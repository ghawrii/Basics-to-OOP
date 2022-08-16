#include <iostream>
#include <conio.h>
using namespace std;

class tollBooth
{
private:
    unsigned int cars;
    double money;

public:
    tollBooth() : cars(0), money(0)
    {
    }
    void payingCar()
    {
        cars++;
        money += 0.5;
    }
    void noPayCar()
    {
        cars++;
    }

    void display() const
    {
        cout << "Total number of cars passed :" << cars << endl;
        cout << "Total toll payed :" << money << endl;
    }
};

int main()
{
    tollBooth myToll;
    while(1)
    {
        cout << "Press P to add a paying car..." << endl;
        cout << "Press N to add a non-paying car..." << endl;
        cout << "or press Escape key to quit..." << endl;
        char dummy = getch();
        switch (dummy)
        {
        case 'p':
        case 'P':
            myToll.payingCar();
            break;
        case 'N':
        case 'n':
            myToll.noPayCar();
            break;
        case 0x1B:
            myToll.display();
            return 0;        
        default:
            break;
        }
    }
    return 0;
}