#include <stdio.h>

int main(void)
{
    int hour, min, sec;
    double time = 3.76;

    hour = (int)time;   //3
    min = (time - (double)hour)*60; // 0.76 * 60 = 45.6 --> 45
    sec = (((time - (double)hour)*60) - min) * 60;  //45.6 - 45 = 0.6 * 60 = 36

    printf("3.76시간은 %d시간 %d분 %d초입니다.\n", hour, min, sec);

    return 0; 

}