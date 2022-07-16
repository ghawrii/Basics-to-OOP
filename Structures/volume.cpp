#include <iostream>
using namespace std;

struct Distance{
    int feet;
    float inches;
};

struct Volume{
    Distance length;
    Distance width;
    Distance height;
};


int main()
{
    Volume DiningRoom;
    DiningRoom.length.feet = 15;
    DiningRoom.length.inches = 4;

    DiningRoom.height.feet = 15;
    DiningRoom.height.inches = 11;

    DiningRoom.width.feet = 15;
    DiningRoom.width.inches = 5;

    float length = 0,width=0, height = 0;
    length = DiningRoom.length.feet + DiningRoom.length.inches/12;
    width = DiningRoom.width.feet + DiningRoom.width.inches/12;
    height = DiningRoom.height.feet + DiningRoom.height.inches/12;

    cout << "Dining room volume is " << length * width * height << " cubic feet." << endl;

    return 0;
}

// Notes on 'struct' Initialization
/*
structs can be initialized in the following two ways:
    struct part1 = {member1,member2,member3};
    part1 = part2; //In this case, each member of part1 is assigned the value of corresponding member of part2.
*/