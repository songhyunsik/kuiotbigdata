#include <stdio.h>

int main(void)
{
    // char fruit[20]; // 배열명은 배열의 주소(0번지)입니다.
    // int cnt;    // 변수명은 값입니다.

    // printf("좋아하는 과일 : ");
    // scanf("%s", fruit);
    // printf("몇 개 : ");
    // scanf("%d", &cnt);
    // printf("%s를 %d개 드립니다.", fruit, cnt);

    char ch;

    printf("문자 입력 : ");
    scanf("%c", &ch);
    printf("%c문자의 아스키 코드 값은 %d입니다.\n", ch, ch);

    return 0;
}