#include <stdio.h>
#include "queue.h"

int main(void)
{
    struct queue s1, s2;
    
    push(&s1, 100);
    push(&s1, 200);

    printf("s1 1st pop() : %d\n", pop(&s1));

    push(&s1, 300);

    printf("s1 2nd pop() : %d\n", pop(&s1));
    printf("s1 3rd pop() : %d\n", pop(&s1));


    push(&s2, 700);
    push(&s2, 800);

    printf("s2 1st pop() : %d\n", pop(&s2));

    push(&s2, 900);

    printf("s2 2nd pop() : %d\n", pop(&s2));
    printf("s2 3rd pop() : %d\n", pop(&s2));
    return 0;
}