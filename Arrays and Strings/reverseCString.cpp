#include <iostream>
#include <cstring>
using namespace std;

void reversit(char[]);

int main()
{
    const int MAX = 100;
    char str[MAX];
    cout << "Enter a string :";
    cin.get(str,MAX);
    reversit(str);
    cout << str << endl;
    return 0;
}

void reversit(char myArray[])
{
    int length = strlen(myArray);
    for (int i = 0; i < length / 2; i++)
    {
        char temp;
        temp = myArray[i];
        myArray[i] = myArray[length - i - 1];
        myArray[length - i - 1] = temp; 
    }
}