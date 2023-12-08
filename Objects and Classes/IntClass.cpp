#include <iostream>
using namespace std;

class Int{
    private:
        int myInt;
    public:
        Int(): myInt(0)
        {}
        void setInt(int num)
        {
            myInt = num;
        }

        void displayInt()
        {
            cout << myInt << endl;
        }

        void addInt(Int toBeAdded,Int tBA1)
        {
            myInt = tBA1.myInt + toBeAdded.myInt;
        }
};

int main()
{
    Int myInt1 , myInt2, myInt3;
    myInt1.setInt(12);
    myInt2.setInt(13);
    myInt3.addInt(myInt1,myInt2);

    myInt1.displayInt();
    myInt2.displayInt();
    myInt3.displayInt();

    return 0;
}