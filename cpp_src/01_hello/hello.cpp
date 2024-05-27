#include <iostream>
using namespace std;

int main()
{
    cout << "hello\n\r"; // hello 출력
    cout << "dbr\n\r"; // dbr 출력
    cout << 'H' << 'e' << 'l' << 'l' <<'o';

    cout << "----------------------------------------------\n\r";

    cout << "너비를 입력하세요>>";

    int width;
    cin >> width; // width에 높이 값 입력

    cout << "높이를 입력하세요>>";

    int height;
    cin >> height; // height에 높이 값 입력

    int area = width * height;
    cout << "면적은 " << area << '\n';
    return 0;
}