#include <stdio.h>
#include "stack.h"

int main(void)
{
   Stack s1, s2;
   //struct stack stacks[20];

   // s1.tos = 0;
   // s2.tos = 0;
   initstack(&s1, 10);
   initstack(&s2, 100);

   push(&s1, 100);
   push(&s1, 200);
   push(&s1, 300);

   printf("s1 1st pop() : %d\n", pop(&s1));
   printf("s1 2nd pop() : %d\n", pop(&s1));
   printf("s1 3rd pop() : %d\n", pop(&s1));

   //pop(&s1);

   push(&s2, 700);
   push(&s2, 800);
   push(&s2, 900);

   printf("s2 1st pop() : %d\n", pop(&s2));
   printf("s2 2nd pop() : %d\n", pop(&s2));
   printf("s2 3rd pop() : %d\n", pop(&s2));

   cleanupStack(&s1);
   cleanupStack(&s2);
   return 0;
}
