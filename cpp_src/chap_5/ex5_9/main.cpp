#include <iostream>
using namespace std;

// 복사 생성 및 복사 생성자

class Circle {
    private:
        int radius;
        
    public:
        Circle() { 
            this -> radius = 1; 
            cout << "생성자의 실행 " << endl; 
        }

        Circle(int radius) { 
            this -> radius = radius; 
            cout << "생성자의 실행 " << endl;
        }

        Circle(Circle &c){
            this -> radius = c.radius; 
            cout << "생성자의 실행 " << endl;
        }

        double getArea() { return 3.14*radius*radius; }
};

int main(void)
{
    Circle src(30);
    Circle dest(src);

    cout << "원본의 면적 = " << src.getArea() << endl;
    cout << "사본의 면적 = " << dest.getArea() << endl;


    return 0;
}