#include <bits/stdc++.h>
using namespace std;

void inline printPair(pair<int, int> p)
{
    cout << "<" << p.first << "," << p.second << ">"
         << " ";
}

int main()
{
    cout << "Hello World!" << endl;

    // Basics
    pair<int, string> fuckThis;
    fuckThis = {2, "abc"}; // make_pair() or this method
    cout << fuckThis.first << " " << fuckThis.second << endl;
    pair<int, string> doNotFuckThis = fuckThis;

    // Usage scenario and example of initialization using other arrays
    int a[] = {1, 3, 4};
    int b[] = {3, 4, 6};
    pair<int, int> p1[3];
    // Initialization using other arrays
    for (int i = 0; i < 3; i++)
    {
        p1[i].first = a[i];
        p1[i].second = b[i];
    }
    // Printing the array of pairs
    for (int i = 0; i < 3; i++)
    {
        printPair(p1[i]);
    }
    cout << endl;

    // Cheking the scoping and breaking mechanism of C++
    int i = 0;
    while (true)
    {
        if (i == 9)
        {
            cout << i + 1;
            break;
        }
        i++;
        cout << i << ",";
    }
    cout << endl;

    return 0;
}