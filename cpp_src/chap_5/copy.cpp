#include <iostream>
using namespace std;

//  얕은 복사와 깊은 복사

int main(void)
{
    int a = 10, b = 20;
    int *pa = &a;
    int *pb = &b;

    cout << a << ", " << b << endl;
    cout << *pa << ", " << *pb << endl; 

    pa = pb;    // 대입

    cout << *pa << ", " << *pb << endl; 

    return 0;
}