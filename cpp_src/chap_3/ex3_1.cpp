#include <iostream>
using namespace std;

// 클래스 선언
class Circle{
    public:
        int radius;         // 멤버 변수(속성, 정보)
        Circle();           // 생성자 함수
        Circle(int r);      // 매개변수가 있는 
        double getArea();   //멤버 함수(행동, 행위)
};
// 클래스 선언
class Square{
    public:
        int width, high;    // 멤버 변수(속성, 정보)
        double getarea();   //멤버 함수(행동, 행위)
};
// 클래스 구현
// 생성자 함수 : 개체가 생성될때 자동으로 호출되는 함수
Circle::Circle() : Circle(1){}
// {
//     radius = 1;
//     cout << "반지름 " << radius << " 원 생성" << endl;
// }
Circle::Circle(int r)
{
    radius = r;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

// 클래스 구현
double Circle::getArea(void)    // 클래스에 있는 함수라는 표시  // 그냥 함수나 클래스 함수를 작성하는 방법은 같다.
{
    return 3.14 * radius * radius;
}

// 클래스 구현
double Square::getarea(void)    // 클래스에 있는 함수라는 표시  // 그냥 함수나 클래스 함수를 작성하는 방법은 같다.
{
    return width * high;
}

int main()
{
    Circle donut(1);   // 개체
    // donut.radius = 1;
    // double area = donut.getArea();
    // cout << "donut 면적은 " << area << endl;

    Circle pizza(30);
    // pizza.radius = 30;
    // area = pizza.getArea();
    // cout <<"pizza 면적은 " << area << endl;

    // Square tower;
    // tower.width = 30;
    // tower.high = 40;
    // area = tower.getarea();
    // cout <<"tower 면적은 " << area << endl;    

    return 0;
}