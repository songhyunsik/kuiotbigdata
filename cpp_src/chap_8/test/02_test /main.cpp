#include <iostream>
#include <string>
using namespace std;

class Circle {
protected:
    int radius;
public:
    Circle(int radius=0) { this->radius = radius; }
    int getRadius() { return radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14*radius*radius; }
};

class NamedCircle : public Circle{
    string s;
   
public:   
    void setNameAndCircle(int a, string s);
    void show();

};
void NamedCircle::setNameAndCircle(int a, string s) {
    this->radius = a;
    this->s = s;
}


void NamedCircle::show() {
    cout << "반지름이 " << radius << "인 " << s << endl; 
}

int main(void)
{
    int r;
    string n;
    NamedCircle pizza[5];
    
    cout << "5 개의 정수 반지름의 원과 이름을 입력하세요." << endl;

    for(int i = 0; i < 5; i++) {
        cout << i+1 << ">> ";
        cin >> r >> n; 
        pizza[i].setNameAndCircle(r, n);
        pizza[i].show();
    }

}