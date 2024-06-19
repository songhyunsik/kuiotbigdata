#include <stdio.h>
#include "queue.h"

int main(void)
{
    Queue s1, s2;
    
    initqueue(&s1, 10);
    initqueue(&s2, 100);

    push(&s1, 100);
    push(&s1, 200);

    int re;
    pop(&s1, &re);      printf("s1 1st pop() : %d\n", re);

    push(&s1, 300);

    pop(&s1, &re);      printf("s1 2nd pop() : %d\n", re);
    pop(&s1, &re);      printf("s1 3rd pop() : %d\n", re);


    push(&s2, 700);
    push(&s2, 800);

    int re2;
    pop(&s2, &re2);     printf("s2 1st pop() : %d\n", re2);

    push(&s2, 900);

    pop(&s2, &re2);     printf("s2 2nd pop() : %d\n", re2);
    pop(&s2, &re2);     printf("s2 3rd pop() : %d\n", re2);

    cleanupQueue(&s1);
    cleanupQueue(&s2);
    return 0;
}