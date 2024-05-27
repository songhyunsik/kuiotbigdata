#include <iostream>
#include <string>
using namespace std;

class Point {
protected:
    int x, y;
public:
    void set(int x, int y);
    void showPoint();
    Point(int x=0, int y=0);
};

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}

void Point::set(int x, int y) {
    this->x = x;
    this->y = y;
}

void Point::showPoint() {
    cout << "(" << this->x << ", " << this->y << ")" << endl;
}

class ColorPoint : public Point{    // x랑 y라는 상속을 만들필요 없음.
    string color;
public:
    void setColor(string color);
    void showColor();
};

void ColorPoint::setColor(string color) {
    this->color = color;

}

void ColorPoint::showColor() {
    cout << color << " : ";
    this->showPoint();
}

int main(void)
{
    Point p;
    ColorPoint cp;

    cp.set(3,4);
    cp.setColor("Red");
    cp.showColor();

    return 0;
}

