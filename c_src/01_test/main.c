// #include <stdio.h>

// int main(void)
// {
//     10 + 20;

//     printf("%05d\n", 10);
//     printf("%03d\n", 10);

//     //float
//     // 1. 기본 소숫점 6자리까지 표시
//     // 2. 실재 값보다 소숫점을 줄이면, 자동 반올림이 된다.
//     // 3. 전체 자리 수를 맞추기 위해 .2f, 10f 등을 사용한다. 
//     printf("%6.2f\n", 3.45); 
//     printf("%6.2f\n", 10.46);

//     printf("%d와 %d의 합은 %d입니다.\n", 10, 20, 30);

//     printf("0o%o\n", 12);  // 8진수
//     printf("0x%02x\n", 12);  // 16진수
//     printf("0x%02X\n", 12);  // 16진수

//     char ch = 'A';
//     char *str = "A"; // 문자열 뒤에 NULL 값이 있기 때문에 문자열

//     printf("%c\n", ch);
//     printf("%s\n", str);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int a = 256;
    char *p = &a;

    printf("a = %d\n", a);
    printf("*p = %d\n", *p);
    
    return 0;
}