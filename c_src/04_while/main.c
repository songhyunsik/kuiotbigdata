// 1부터 10까지의 합을 구하는 프로그램(while 사용)

// 시작값 입력 => 10
// 끝값 입력 => 20

// 10부터 20까지의 합은 165입니다.

// 시작값 입력 => 1
// 끝값 입력 => 5

// 10부터 20까지의 합은 15입니다.

#include <stdio.h>

int main(void)
{
    int start, end, sum = 0, start2,change;

    printf("시작값 입력 : ");
    scanf("%d", &start);
    printf("끝값 입력 : ");
    scanf("%d", &end);

    if (start < end)
    {
        start2 = start;
        while (start < end + 1)
        {
            sum = sum + start; // 합계 누적 dd
            start++;
        }
        printf("%d부터 %d까지의 합은 %d입니다.\n", start2, end, sum);
    }
    else if (end < start)
    {
        change = start;
        start = end;
        end = change;

        start2 = start;

        while (start < end + 1)
        {
            sum = sum + start; // 합계 누적 
            start++;
        }
        printf("%d부터 %d까지의 합은 %d입니다.\n", end, start2, sum);
    }

    // for (int i = 1; i < 11; i++)
    // {
    //     //sum = sum + i;
    //     sum += i;
    // }

    
    return 0;
}