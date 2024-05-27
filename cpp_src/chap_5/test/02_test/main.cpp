#include <iostream>
using namespace std;

void half(double &n)    //창조 연산자에 의해 공간을 만들지 않는다.
{
    n = n / 2.0;
}

void half2(double *num2)
{
    *num2 = *num2 / 2;
}

int main(void)
{
    double n=20,n2=40;
    half(n);
    cout << n << endl;

     half2(&n2);
    cout << n2 << endl;
}