#include <iostream>
using namespace std;

// Function declarations
double power(double n, int p=2);
int power(int n, int p=2);
float power(float n, int p=2);
long power(long n, int p=2);

int main()
{
    cout << power(4) << endl << power(4,3) << endl;

    return 0;
}

// Function implementations
double power(double n, int p)
{
    double answer = 1;
    for(int i =0;i<p;i++)
    {
        answer *= n;
    }
    return answer;
}

int power(int n, int p)
{
    int answer = 1;
    for(int i =0;i<p;i++)
    {
        answer *= n;
    }
    return answer;
}

long power(long n, int p)
{
    long answer = 1;
    for(int i =0;i<p;i++)
    {
        answer *= n;
    }
    return answer;
}

float power(float n, int p)
{
    float answer = 1;
    for(int i =0;i<p;i++)
    {
        answer *= n;
    }
    return answer;
}