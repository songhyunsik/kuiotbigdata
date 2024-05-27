#include <stdio.h>

int main(void)
{
    int seats = 70;
    int audience = 65;
    double rate;

    //rate = ((1.0*audience) / (1.0*seats)) * 100;
    rate = ((double)audience / (double)seats) * 100.0;

    printf("입장률 : %.1f%%\n", rate);

    return 0;
}