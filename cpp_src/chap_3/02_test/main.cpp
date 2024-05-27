#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;



class Date {
    private:
    vector<string> split(string str, char Delimiter); 

    public:
    int year1, month1, day1;

    int getYear();
    int getMonth();
    int getDay();

    int show();

    Date(string data_str);
    Date(int year, int month, int day);
};

Date::Date(string data_str) {
    vector<string> result = split(data_str, '/');

    year1 = stoi(result[0]);
    month1 = stoi(result[1]);
    day1 = stoi(result[2]);
    cout << year1 << ',' << month1 << ',' << day1 << endl;

    show();
}

vector<string> Date::split(string str, char Delimiter) {
    istringstream iss(str);             // istringstream에 str을 담는다.
    string buffer;                      // 구분자를 기준으로 절삭된 문자열이 담겨지는 버퍼
 
    vector<string> result;
 
    // istringstream은 istream을 상속받으므로 getline을 사용할 수 있다.
    while (getline(iss, buffer, Delimiter)) {
        result.push_back(buffer);               // 절삭된 문자열을 vector에 저장
    }
 
    return result;
}

Date::Date(int year, int month, int day) {
    year1 = year;
    month1 = month;
    day1 = day;
}

int Date::getYear() {
    return year1;
}

int Date::getMonth() {
    return month1;
}

int Date::getDay() {
    return day1;
}

int Date::show() {

    cout << year1 << "년" << month1 << "월" << day1 << "일" << endl;
}

int main() {
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");
    independenceDay.show();

    cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}