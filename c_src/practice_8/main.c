#include <stdio.h>

int main(void)
{
    int i, j;
    printf("구구단을 외워보자!\n");
    for (i = 1; i <= 9; i++)
    {
        for (j = 2; j < 10; j++)
        {
            printf("%d X %d = %2d\t", j, i, i * j);
        }
        printf("\n");
    }

    return 0;
}