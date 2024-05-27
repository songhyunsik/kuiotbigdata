#include <iostream>
using namespace std;

// 클래스 선언
class Circle{
       
    public:
        
    int radius;         // 멤버 변수(속성, 정보)
        Circle();           // 생성자 함수
        Circle(int r);      // 매개변수가 있는 
        ~Circle();
        double getArea();   //멤버 함수(행동, 행위)
        void setRadius(int r);
};

// 클래스 구현
// 생성자 함수 : 개체가 생성될때 자동으로 호출되는 함수
Circle::Circle()
{
    radius = 1;
    cout << "생성자 실행 radius = " << radius<< endl;
}

Circle::Circle(int r)
{
    radius = r;
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

int main()
{
    Circle *pArray = new Circle [3];
    pArray[0].setRadius(10);
    pArray[1].setRadius(20);
    pArray[2].setRadius(30);

    for(int i = 0; i< 3; i++)
    {
        cout << pArray[i].getArea() << endl;
    }
    Circle *p = pArray;
    for(int i = 0; i< 3; i++)
    {
        cout << p->getArea() << endl;
        p++;
    }


    delete [] pArray;
}