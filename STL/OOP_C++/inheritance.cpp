#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void func()
    {
        cout << "Inherited from class A" << endl;
    }
};

class B : public A
{
public:
    void funcB()
    {
        func();
        cout << "Inherited from class B" << endl;
    }
};

class C : public B
{
public:
    void funcC()
    {
        func();
        funcB();
    }
};

int main()
{
    C c;

    return 0;
}