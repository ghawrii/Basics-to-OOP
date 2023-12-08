#include <iostream>
using namespace std;

class safeArray
{
private:
    int safe[100];
public:
    safeArray()
    {
        for(int i = 0; i < 100; i++)
        {
            safe[i] = 0;
        }
    }
    safeArray(int index,int value)
    {
        safe[index] = value;
    }
};

int main()
{
    
    return 0;
}