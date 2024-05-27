#include <stdio.h>

// int main(void)
// {
//     int a;
//     int *pa;

//     printf("pa변수의 사이즈 : %ld\n", sizeof(pa));

//     pa = &a;
//     *pa = 10;

//     printf("포인터로 a 값 출력 : %d\n", *pa);
//     printf("변수명으로 a 값 출력 : %d\n", a);

//     return 0;
// }

// int main(void)
// {
//     int a = 10, b = 15, total;
//     double avg;
//     int *pa, *pb;
//     int *pt = &total;
//     double *pg = &avg;

//     pa = &a;
//     pb = &b;

//     *pt = *pa + *pb;
//     *pg = *pt / 2.0;

//     printf("두 정수의 값 : %d, %d\n", *pa, *pb);
//     printf("두 정수의 합 : %d\n", *pt);
//     printf("두 정수의 평균 : %.1lf\n", *pg);

//     return 0;
// }

// 함수 선언
int *swap(int param_a, int param_b);

int main(void)
{
    int a = 10, b = 20;
    int *pary = swap(a, b);
    a = *(pary + 0);    //p.295
    b = *(pary + 1);
    printf("a: %d, b: %d\n", a, b);
}

// 함수 정의
int *swap(int param_a, int param_b)
{
    int temp = param_a;
    param_a = param_b;
    param_b = temp;

    int ary[2] = {param_a, param_b};

    return ary;
}