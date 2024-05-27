#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    int price, pages;
public:
    Book(string title="", int price=0, int pages=0) {
        this->title = title; this->price = price; this->pages = pages;
    }
    void show() {
        cout << title << ' ' << price << "원 " << pages << "페이지" << endl;
    }
    string getTitle() { return title; }

    // 1. 실습문제
    // Book operator+=(int price);
    // Book operator-=(int price);
    // friend void operator+=(Book &a, int op2);
    // friend void operator-=(Book &a,int op2);

    // 2. 실습문제
    // bool operator==(int price);
    // bool operator==(string title);
    // bool operator==(Book op2);

    // 3. 실습문제
    bool operator!=(int price);
};

// 일반 함수 선언
// 1. 실습문제
// void operator+=(Book &a, int op2);
// void operator-=(Book &a, int op2);



int main(void)
{
    // 1. 실습문제
    // Book a("청춘", 20000, 300), b("미래", 30000, 500),c;
    // a += 500;
    // b -= 500;
    // a.show();
    // b.show();

    // 2. 실습문제
    // Book a("명품 C++", 30000, 500), b("고품 C++",30000,5000);
    // if(a == 30000) cout << "정가 30000원" << endl;
    // if(a == "명품 C++") cout << "명품 C++ 입니다." << endl;
    // if(a == b) cout << "두 책이 같은 책입니다." << endl;

    // 3. 실습문제
    Book book("벼룩시장", 0, 50);
    if(!book) cout << "공짜다" << endl;

    return 0;
}

// 3. 실습문제
bool Book::operator!=(int price) {
    if((this->price = price) == 0) {
        return true;
    }
    else {
        false;
    }
}

// 2. 실습문제
// bool Book::operator==(int price) {
//     if(this->price == price) {
//         return true;
//     }
//     else {
//         return false;
//     }
// }

// bool Book::operator==(string title) {
//     if(this->title == title) {
//         return true;
//     }
//     else {
//         return false;
//     }
// }

// bool Book::operator==(Book op2) {
//     if(this->title == op2.title && this->price == op2.price && this->pages == op2.pages) {
//         return true;
//     }
//     else {
//         return false;
//     }
// }

// 1. 실습문제
// Book Book::operator+=(int price) {
//     this->price = this->price + price;
//     return *this;
// }

// Book Book::operator-=(int price) {
//     this->price = this->price - price;
//     return *this;
// }

// void operator+=(Book &a, int op2) {
//     a.price += op2;

// }

// void  operator-=(Book &a, int op2) {
//     a.price -= op2;
// }
