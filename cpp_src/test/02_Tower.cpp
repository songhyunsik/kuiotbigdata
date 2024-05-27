#include <iostream>
using namespace std;

class Tower{
    public:
        int h;
        int getHeight();

        Tower();
        Tower(int m);

};

Tower::Tower()
{
    h = 1;
}
Tower::Tower(int m)
{
    h = m;
}


int Tower::getHeight(){
    return h;
}

int main()
{
    Tower myTower;  // 1 미터
    Tower seoulTower(100);  // 100 미터
    cout << "높이는 " << myTower.getHeight() << "미터" << endl;
    cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}