#include <iostream>
using namespace std;

double half(double &num1)
{
    num1 = num1 / 2;
}

double half2(double *num2)
{
    *num2 = *num2 / 2;
}

int main()
{
    double n=20,n2=40;
    half(n);
    cout << n << endl;

     half2(&n2);
    cout << n2 << endl;
}