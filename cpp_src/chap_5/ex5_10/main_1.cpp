#include <iostream>
#include <cstring>
using namespace std;

// 멤버 변수에 포인터가 있냐에 따라, 복사 생성자를 생각해보는 것이 나을것이다.

class Person {
        int id;
        char *name;
    public:
        Person();
        Person(const Person &c);
        Person(int id, const char *name);
        ~Person();
        void changeName(const char *name);
        void show() { cout << id << ", " << name << endl; }
};

Person::Person(int id, const char *name) {
    this->id = id;
    int len = strlen(name); //strlen은 NULL 문자를 포함하지 않는다.
    //cout << len << endl;
    this->name = new char [len+1];  // NULL 문자 때문에 +1 (NULL 문자를 빼고 들어갔지 때문)
    //this->name = name;  // 얕은 복사
    strcpy(this->name,name);
}

// 복사 생성자 작성
Person::Person(const Person &c) {
    this->id = c.id;
    //this->name = c.name;
    int len = strlen(c.name); //strlen은 NULL 문자를 포함하지 않는다.
    this->name = new char [len+1];  // NULL 문자 때문에 +1 (NULL 문자를 빼고 들어갔지 때문)
    strcpy(this->name,c.name);
}


Person::~Person() {
    if(name) delete [] this->name;  // *발생한 오류* -> 예외가 발생하였습니다.   
}

void Person::changeName(const char *name) {
    if(strlen(name) > strlen(this->name))   return;
    strcpy(this->name, name);
}

int main(void)
{
    Person father(1, "Kitae");
    Person daughter(2, "Grace");


    cout << "daughter 객체 생성 직후 ---" << endl;
    father.show();
    daughter.show();

    daughter.changeName("Grace");
    cout << "daughter 객체 생성 직후 ---" << endl;
    father.show();
    daughter.show();

    return 0;
}