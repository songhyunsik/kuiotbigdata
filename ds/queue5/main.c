#include <stdio.h>
#include "queue.h"

int main(void)
{
    Queue s1, s2;
    
    initqueue(&s1, 10, sizeof(int));
    initqueue(&s2, 100, sizeof(double));

    int i;
    i = 100;    push(&s1, &i);
    i = 200;    push(&s1, &i);
    i = 300;    push(&s1, &i);

    int re;
    pop(&s1, &re);      printf("s1 1st pop() : %d\n", re);
    pop(&s1, &re);      printf("s1 2nd pop() : %d\n", re);
    pop(&s1, &re);      printf("s1 3rd pop() : %d\n", re);


    double d;
    d = 700.0;      push(&s2, &d);
    d = 800.0;      push(&s2, &d);
    d = 900.0;      push(&s2, &d);

    double re2;
    pop(&s2, &re2);      printf("s2 1st pop() : %f\n", re2);
    pop(&s2, &re2);      printf("s2 2nd pop() : %f\n", re2);
    pop(&s2, &re2);     printf("s2 3rd pop() : %f\n", re2);

    cleanupQueue(&s1);
    cleanupQueue(&s2);
    return 0;
}