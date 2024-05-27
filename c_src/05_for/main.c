#include <stdio.h>

int main(void)
{
    int start = 1, end = 10, sum = 0;

    for (int i = start; i < end + 1; i++)
    {
        sum = sum + i;
    }

    printf("합 : %d\n", sum);
    printf("%d부터 %d까지의 합은 %d입니다.\n", start, end, sum);

    // 중첩 for문
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0 ; j < 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < 6; i++)
    {
        for(int j = 0 ; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < 6; i++)
    {
        for(int j = 0 ; j < 6 - i; j++)
        {
            printf(" ");
        }
        for(int j = 0 ; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}