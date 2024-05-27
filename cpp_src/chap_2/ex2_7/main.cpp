#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string song("Falling in love woth you");
    string elvis(" Elvis Prestey");
    string singer;


    cout << song + "를 부른 가수는" << endl;
    cout << "(힌트 : 첫글자는: " << elvis[0] << endl;
    cout << song.length() << endl;

    getline(cin, singer);
    if(singer == elvis)
        cout << "맞았습니다.";
    else
        cout << "틀렸습니다. " +elvis + "입니다." << endl;

    return 0;
}