#include <iostream>
using namespace std;

//--------------------------------------------class-------------------------------------
// 클래스 선언
class Rect {
public: 
    int width, height;
    Rect(int width, int height);
    friend bool equals(Rect r, Rect s); // 프렌드를 사용하면 다른 함수에서도 접근할 수 있다.
};


// 일반 함수 선언
bool equals(Rect r, Rect s);

//--------------------------------------------main-------------------------------------
int main(void)
{
    Rect a(3,4), b(4,5);
    if(equals(a,b)) cout << "equal" << endl;
    else cout << "not equal" << endl;
    return 0;
}

// 클래스 구현
Rect::Rect(int width, int height) {
        this->width = width;
        this->height = height;
    }

// 일반 함수 구현
bool equals(Rect r, Rect s) {
    if(r.width == s.width && r.height == s.height)
        return true;
    else   
        return false;
}