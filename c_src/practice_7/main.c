// 3의 배수와 7의 배수를 제외하고 합을 구하시오. (1~100)

#include <stdio.h>

// int main(void)
// {
//     int sum, i;

//     for ( i =1;i<=100;i++)
//     {
//         if((i%3)==0)
//         {
//             continue;
//         }
//         sum+=i;
//     }
//     printf("1부터 100까지의 합 : %d\n", sum);

//     return 0;
// }

int main(void)
{
    int sum, i;

    for (i = 1; i <= 100; i++)
    {
        if (((i % 3) == 0) && ((i % 7) == 0))
        {
            sum += i;
        }
        
    }
    printf("1부터 100까지의 3의 배수와 7의 배수를 제외한 합 : %d\n", sum);
}