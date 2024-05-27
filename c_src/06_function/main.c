#include <stdio.h>

// 함수 선언
void star_display(int row, int col); // return 할 값이 없으면 void, 정수를 넘겨줘야할 때는 int, else

int main(void)
{
    int row = 3, col = 5; // row: 세로(행), col: 가로(열)

    star_display(row, col); // 함수 호출

    return 0;
}

// 함수 정의
void star_display(int row, int col) // return 할 값이 없으면 void, 정수를 넘겨줘야할 때는 int, else
{
    // 중첩 for문
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}