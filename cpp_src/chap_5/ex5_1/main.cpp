#include <iostream>
using namespace std;

// 클래스 선언
class Circle{
    private:
        int radius;         // 멤버 변수(속성, 정보)
    public:
        
    
        Circle();           // 생성자 함수
        Circle(int r);      // 매개변수가 있는 
        ~Circle();
        double getArea();   //멤버 함수(행동, 행위)
        void setRadius(int radius);
        int getRadius() { return radius; }
};

// 클래스 구현
// 생성자 함수 : 개체가 생성될때 자동으로 호출되는 함수
Circle::Circle()
{
    radius = 1;
    cout << "생성자 실행 radius = " << radius<< endl;
}

Circle::Circle(int radius)
{
    this -> radius = radius;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle()
{
    cout << "소멸자 실행 radius = " << radius << endl;
}

void Circle::setRadius(int r)
{
    radius = r;
}

// 클래스 구현
double Circle::getArea(void)    // 클래스에 있는 함수라는 표시  // 그냥 함수나 클래스 함수를 작성하는 방법은 같다.
{
    return 3.14 * radius * radius;
}

void increase(Circle c)
{
    int r = c.getRadius();  //30
    c.setRadius(r+1);   //31
}

int main()
{
    Circle waffle(30);
    increase(waffle);   // waffle의 값이 c에 복사된다.
    cout << waffle.getRadius() << endl; //30
}