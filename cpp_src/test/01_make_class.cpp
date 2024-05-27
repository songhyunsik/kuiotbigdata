#include <iostream>
using namespace std;

//클래스 선언
    class TV{
        public:
        bool on;        // true: on, false: off
        int channel;
        int volume;

        TV();
        TV(int c);

        void powerOn();
        void powerOff();
        void increaseChannel();
        void decreaseChannel();
        void increaseVolume();
        void decreaseVolume();
    };

    // 클래스 구현
    void TV::powerOn()
    {
        on = true;
    }
    // 클래스 구현
    void TV::powerOff()
    {
        on = false;
    }
    // 클래스 구현
    void TV::increaseChannel()
    {
        channel = channel + 1;
    }
    // 클래스 구현
    void TV::decreaseChannel()
    {
        channel = channel - 1;
    }
    // 클래스 구현
    void TV::increaseVolume()
    {
        volume = volume + 1;
    }
    // 클래스 구현
    void TV::decreaseVolume()
    {
        volume = volume - 1;
    }


    //클래스 구현
    TV::TV()    // 기본 생성자
    {
        on = false;
        channel = 0;
        volume = 0;
    }

    TV::TV(int c)
    {
        on = false;
        channel = c;
        volume = 0;
        //cout << "이 채널은 " << channel << "번 입니다." << endl;
    }

int main(void)
{
    // LG는 객체는 생성시에 채널을 10으로 설정
    // samsung 객체는 생성시에 채널을 100으로 설정
    TV samsung(100), LG(10);

   cout << "SAMSUNG의 채널은 " << samsung.channel << "입니다." << endl;
   cout << "LG의 채널은 " << LG.channel << "입니다." << endl;

    return 0;
}