#include <iostream>
using namespace std;

//클래스 선언
class Rect;
class RectManager;

//--------------------------------------------class-------------------------------------
// 클래스 선언
class RectManager {
public:
    bool equals(Rect r, Rect s);
};

class Rect {
public: 
    int width, height;
    Rect(int width, int height);
    friend bool RectManager::equals(Rect r, Rect s); // 프렌드를 사용하면 다른 함수에서도 접근할 수 있다.
};

Rect::Rect(int width, int height) {
        this->width = width;
        this->height = height;
}

bool RectManager::equals(Rect r, Rect s) {
    if(r.width == s.width && r.height == s.height)
        return true;
    else   
        return false;
}

// 일반 함수 선언

//--------------------------------------------main-------------------------------------
int main(void)
{
    Rect a(3,4), b(4,5);
    RectManager man;

    if(man.equals(a,b)) cout << "equal" << endl;
    else cout << "not equal" << endl;
    return 0;
}

// 클래스 구현

// 일반 함수 구현
