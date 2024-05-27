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
    NamedCircle(int radius=0, string s="");
    void setCircle(string pizza[5]);
    void show();

};

NamedCircle::NamedCircle(int radius, string s) {
    this->radius = radius;
    this->s = s;
}

void NamedCircle::show() {
    cout << "반지름이 " << radius << "인 " << s << endl; 
}

int main(void)
{
    NamedCircle waffle(3, "waffle");
    waffle.show();
}