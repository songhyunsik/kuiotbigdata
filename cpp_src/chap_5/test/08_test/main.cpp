#include <iostream>
using namespace std;

class MyInStack {
public:
    int *p;     // 동적 할당 공간의 주소를 저장할 변수
    int size;   // 동적 할당 공간의 크기를 저장할 변수
    int tos;    // 스택에 현재 주소 값을 저장
public:
    MyInStack();
    MyInStack(int size);
    MyInStack(const MyInStack &s);
    ~MyInStack();
    bool push(int n);
    bool pop(int &n);
    void tos_show();
    void p_show();
};

MyInStack::MyInStack() {
    this->size = 10;
    this->p = new int [size] {0};
tos = 0;
}

MyInStack::MyInStack(int size) {
    this->size = size;
    this->p = new int [this->size] {0};
    this->tos = 0;
}

MyInStack::MyInStack(const MyInStack &s) {  // 복사생성자
    this->size = s.size;
    this->p = new int [this->size] {0};
    // 베열의 요소값 복사(같은 복사), 주소복사는 안됨(얕은 복사)
    for(int i = 0; i < this->size; i++) {
        this->p[i] = s.p[i];
    }
    this->tos = s.tos;
}

MyInStack::~MyInStack() {
    if(this->p) delete [] this->p;
}

bool MyInStack::push(int n) {
    if(tos>=(size-1)) {
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

void MyInStack::tos_show() {
    cout << tos << endl;
}

void MyInStack::p_show() {
    for(int i = 0; i < this->size; i++) {
        cout << p[i] << ' ';
    }
    cout << endl;
}

int main(void)
{
    MyInStack a;
    a.push(10);
    a.push(20);

    MyInStack b = a;

    b.push(30);
    a.p_show();
    b.p_show();
    cout << "---------------------------------------------------------------------------------------" << endl;
    int n;
    a.pop(n);
    cout << "스택 a에서의 팝한 값 " << n << endl;
    b.pop(n);
    cout << "스택 b에서의 팝한 값 " << n << endl;

    return 0;
}