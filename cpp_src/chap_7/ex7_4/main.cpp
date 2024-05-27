#include <iostream>
using namespace std;

class Power;

Power sum(Power a, Power b);
Power operator+=(int op1, Power op2);

class Power {
    int kick;
    int punch;
public:
    //Power();
    Power(int kick=0, int punch=0);
    void show();
    Power sum(Power op);
    Power operator+(Power op2);
    Power operator+(int op2);
    Power operator-(Power op2);
    bool operator==(Power op2);     // ex7_5
    Power operator+=(Power op2);    // ex7_6
    Power operator++();             // 전위 ++ 연산자 중복
    friend Power sum(Power a,  Power b);
    friend Power operator+=(int op1, Power op2);
};

// 일반 함수 선언
Power sum(Power a,  Power b);

// Power::Power() {
//     this->kick = 0;
//     this->punch = 0;
// }

Power::Power(int kick, int punch) {
    this->kick = kick;
    this->punch = punch;
}

Power Power::sum(Power op) {
    Power c;

    c.kick = this->kick + op.kick;
    c.punch = this->punch + op.punch;

    return c;
}

Power Power::operator+(Power op2) {
    Power tmp;
    tmp.kick = this->kick + op2.kick;
    tmp.punch = this->punch + op2.punch;
    return tmp;
}

Power Power::operator+(int op2) {
    Power tmp;
    tmp.kick = this->kick + op2;
    tmp.punch = this->punch + op2;
    return tmp;
}


Power Power::operator-(Power op2) {
    Power tmp2;
    tmp2.kick = this->kick - op2.kick;
    tmp2.punch = this->punch - op2.punch;
    return tmp2;
}

bool Power::operator==(Power op2) {
    if(this->kick == op2.kick && this->punch == op2.punch) {
        return true;
    }
    else {
        return false;
    }
}

Power Power::operator+=(Power op2) {
    this->kick = this->kick + op2.kick;
    this->punch = this->punch + op2.punch;
    return *this;
}

Power Power::operator++() {
    kick++;
    punch++;
    return *this;
}


void Power::show() {
    cout << "Kick=" << kick << ", " << "Punch=" << punch << endl;
}

Power sum(Power a, Power b) {

}

Power operator+=(int op1, Power op2) {
    Power tmp;
}

// int main(void)
// {
//     Power a(3,5), b(4,6), c, d, e;
//     b = ++a;
//     ++a = b;
//     //c = sum(a,b); // 리턴하는 값은 Power형이다.
//     //c = a.sum(b);
//     c = a + b;
//     d = a - b;
//     e = a += b;
//     a += 5;

//     cout << "--------------------" << endl;

//     a.show();
//     b.show();

//     cout << "--------------------" << endl;

//     c.show();

//     cout << "--------------------" << endl;

//     d.show();

//     cout << "--------------------" << endl;

//     e.show();

//     cout << "--------------------" << endl;

//     a.show();

//     cout << "--------------------" << endl;

//    if(a==b) {
//     cout << "Same" << endl;
//    }
//    else {
//     cout << "Not Same" << endl;
//    }

//     cout << "--------------------" << endl;
//     return 0;
// }

int main(void)
{
    Power a(3,5), b;
    a.show();
    b.show();
    b = 2 + a;
    a.show();
    b.show();
}

Power sum(Power a,  Power b) {
    Power c;

    c.kick = a.kick + b.kick;
    c.punch = a.punch + b.punch;

    return c;
}
