#include <iostream>
#include <cstring>
using namespace std;

class Book {
    char *title;
    char *author;
    int price;
    int page;
public:
    Book(const char *title, int price);
    Book(const char *title, const char *author, int price, int page);
    ~Book();
    Book(Book &c);
    void set(const char *title, int price);
    void set(const char *title, const char *author, int price, int page);
    void show() { 
        cout << title << ' ' << price << "원" << endl; 
        cout << author << ' ' << page << "페이지" << endl;
    }
};

Book::Book(const char *title, int price) {
    int len = strlen(title);
    this->title = new char [len+1];
    strcpy(this->title,title);
    this->price = price;

}

Book::Book(const char *title, const char *author, int price, int page) {
    int len = strlen(title);
    this->title = new char [len+1];
    strcpy(this->title,title);
    this->price = price;

    int len2 = strlen(author);
    this->author = new char [len2+1];
    strcpy(this->author, author);
    this->page = page;
}

Book::~Book() {
    if(title) delete [] this->title;
    if(author) delete [] this->author;
}

Book::Book(Book &c) {
    this->price = c.price;
    int len = strlen(c.title); //strlen은 NULL 문자를 포함하지 않는다.
    this->title = new char [len+1];  // NULL 문자 때문에 +1 (NULL 문자를 빼고 들어갔지 때문)
    strcpy(this->title, c.title);

    this->page = c.page;
    int len2 = strlen(c.author); //strlen은 NULL 문자를 포함하지 않는다.
    this->author = new char [len2+1];  // NULL 문자 때문에 +1 (NULL 문자를 빼고 들어갔지 때문)
    strcpy(this->author, c.author);
}

void Book::set(const char *title, int price) {
    if(title) delete [] this->title;
    int len = strlen(title);
    this->title = new char [len+1];
    strcpy(this->title,title);

    this->price = price;
}

void Book::set(const char *title, const char *author, int price, int page) {
    if(title) delete [] this->title;
    int len = strlen(title);
    this->title = new char [len+1];
    strcpy(this->title,title);

    this->price = price;

    if(author) delete [] this->author;
    int len2 = strlen(author);
    this->author = new char [len2+1];
    strcpy(this->author,author);

    this->page = page;
}


int main(void)
{
    Book cpp("명품C++", "황기태", 10000, 696);
    Book java = cpp;
    java.set("명품자바", "홍길동", 12000, 800);
    cpp.show();
    java.show();
}