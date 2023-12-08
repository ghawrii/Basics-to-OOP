#include <iostream>
using namespace std;

double power(double n, int p=2);

int main()
{
    cout << power(4) << endl << power(4,3) << endl;

    return 0;
}

double power(double n, int p)
{
    double answer = 1;
    for(int i =0;i<p;i++)
    {
        answer *= n;
    }
    return answer;
}