#include <iostream>
using namespace std;

class MyInStack {
public:
    int p[10];
    int tos;
public:
    MyInStack();
    bool push(int n);
    bool pop(int &n);
};

MyInStack::MyInStack() {
    tos = 0;
    for(int i = 0; i<10; i++) {
        p[i] = 0;   // 쓰레기값 정리
    }
}

bool MyInStack::push(int n) {
    if(tos>=10) {
        return false;
    }
    else {
        p[tos] = n;
        tos++;
        return true;
    }
}

bool MyInStack::pop(int &n) {
    if(tos<1) {
        return false;
    }
    else {
        tos--;
        n = p[tos];
        
        return true;
    }
}

int main(void)
{
    MyInStack a;
    for(int i=0; i<11; i++) {
        if(a.push(i)) cout << i << ' ';
        else cout << endl << i+1 << " 번째 stack full" << endl;
    }
    int n;
    for(int i=0; i<11; i++) {
        if(a.pop(n)) cout << n << ' ';
        else cout << endl << i+1 << " 번째 stack empty";
    }
    cout << endl;
    cout << a.tos << endl;
}