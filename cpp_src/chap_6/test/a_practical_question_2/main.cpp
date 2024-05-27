#include <iostream>
using namespace std;

class Person {
public:
    int id;
    double weight;
    string name;
public:
    void show() { cout << id << ' ' << weight << ' ' << name << endl; ;}
    // Person();
    // Person(int a, string n);
    Person(int a, string n, double A);
};


// Person::Person() {
//     this->id = 1;
//     this->weight = 20.5;
//     this->name = "Grace";
// }

// Person::Person(int a, string n) {
//     this->id = a;
//     this->weight = 20.5;
//     this->name = n;
// }


Person::Person(int a = 1, string n = "Grace", double A = 20.5) {
    this->id = a;
    this->name = n;
    this->weight = A;
}

int main(void)
{
    Person grace(45, "Jinseong", 31.6), ashley(2, "Ashley"), helen(3, "Helen", 32.5);
    grace.show();
    ashley.show();
    helen.show();
}