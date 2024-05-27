#include <iostream>
using namespace std;

// 프로그램이 실행될때마다 맞춰주기 위해 동적 할당을 사용한다.

int main()
{
    
    int n;

    while(1)
    {
        while(1) {
            cout << "입력할 정수의 개수는?";
            cin >> n;
            if(n<=0){
                continue;
            }
            break;
        }
        
        if(n <= 0) return 0;
        int *p = new int[n]; // n 개의 정수 배열 동적 할당
        if(!p) {
            cout << "메모리를 할당할 수 없습니다.";
            return 0;
        }

        for(int i = 0; i < n; i++) {
            cout << i + 1 << "번째 정수: ";
            cin >> p[i];
        }

        int sum = 0;
        for(int i = 0; i < n; i++) 
            sum += p[i];
        cout << "평균 = " << sum/n << endl;

        delete [] p; //배열 메모리 반환 / 만약 딜리트를 없애면 메모리가 계속 쌓여서, 겹치는 문제가 발생해 널값이 출력된다.
    }
    return 0;
}