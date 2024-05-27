#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;

    cout << "아래에 문자열을 입력하세요. 빈 칸이 있어도 됩니다.(한글 안됨) " << endl;
    getline(cin, s, '\n');  // 문자열 출력
    int len = s.length();   // 문자열의 길이
    // I love you
    // 0123456789
    for(int i = 0; i<len; i++)
    {
        string first = s.substr(len-1, 1);   // 맨 앞의 문자 1개를 문자열로 분리
        string sub = s.substr(0, len-1);    // 나머지 문자들을 문자열로 분리
        s = first + sub;  // 두 문자열을 연결하여 새로운 문자열로 만듦
        cout << s << endl;
    }
}