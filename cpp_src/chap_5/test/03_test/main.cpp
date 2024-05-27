#include <iostream>
#include <string>
using namespace std;

// call by reference
void combine(string &text1, string &text2, string &text3)   // 창조 연산자
{
    text3 = text1 + " " + text2;
}

// call by address
void combine2(string *text11, string *text22, string *text33) // 포인터
{
    *text33 = *text11 + " " + *text22;  
}

int main(void)
{
    string text1("I love you"), text2("very much");
    string text3;
    combine(text1, text2, text3);
    cout << text3 << endl;

    string text11("I love you"), text22("very much");
    string text33;
    combine2(&text11, &text22, &text33);
    cout << text33 << endl;
}