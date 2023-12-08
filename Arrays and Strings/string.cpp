#include <iostream>
#include <string>
using namespace std;

int main()
{
    char name[30]; // This is a C-string
    string myName = "Fuck me mate!";
    cout << myName << endl;
    string sampleInput;
    cin >> sampleInput; // This will only take till it encounters a space
    cout << sampleInput << endl;
    string sampInput;
    cin.ignore(); // This will take out the last stored /n in the buffer.
    getline(cin,sampInput); // This will take input till it encounters a '/n'
    cout << sampInput << endl;
    
    return 0;
}