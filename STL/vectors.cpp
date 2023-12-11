#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v)
{
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Declaration Syntax
    vector<int> v;
    
    // push_back() O(1)
    for (int i = 0; i < v.size(); i++) // O(1)
    {
        v.push_back(i);
        printVector(v);
    }

    // pop_back() O(1)
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        v.pop_back();
        printVector(v);
    }

    // Copying O(n) 
    vector<int> v1 = v;
    /*This copying is an expensive function because of which, we will try to copy by reference wherever possible*/

    return 0;
}