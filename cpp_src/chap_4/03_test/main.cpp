#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    // 변수 언언
    string str;     // 입력 문자열을 저장할 변수
    int cnt = 0;    // a의 개수를 저장할 변수

    // 문자열 입력
    cout << "문자열 입력>> ";
    getline(cin, str, '\n');
    //cout << str << endl;

    // 문자열에서 a 문자 찾기
    // 1. 일반적인 방법
    // for(int i=0; i<(str.length()); i++)
    // {
    //     if(str.at(i) == 'a')
    //     {
    //         cnt++;
    //     }
    // }

    // 2. string의 find 함수를 이용하는 방법
    int pos = 0;
    while(1)
    {
        pos = str.find('a', pos);
        cout << pos << endl;

        // if(pos == -1)
        // {
        //     break;
        // }
        // else {
        //     cnt++;
        // }

        if(pos != -1)
        {
            cnt++;
            pos++;
        }
        else {
            break;
        }
    }

    cout << "문자 a는 " << cnt << "개 있습니다." << endl;

    return 0;
}

// Are you happy? I am so happy