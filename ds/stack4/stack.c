#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include <assert.h>

void initstack(Stack *ps, int size) {
   ps->pArr = malloc(sizeof(int) * size);
   ps->size = size;
   ps ->tos = 0;
}

void cleanupStack(Stack *ps) {
   free(ps->pArr);
}

// struct stack {
//    int array[100];
//    int tos;
// };

void push(Stack *ps, int data) {
   //stack[tos] = data;
   //++tos;

   // if(ps->tos == ARRAYSIZE) {
   // if(ps->tos == ps->size) {
   //    printf(stderr, "stack is full\n");
   //    exit(1);
   // }

   assert(ps->tos != ps->size);
   
   //ps->array[ps->tos] = data;
   ps->pArr[ps->tos] = data;
   ++ps->tos;
}

int pop(Stack *ps) {
   // if(ps->tos == 0) {
   //    fprintf(stderr,"stack is empty\n");
   //    exit(2);
   // }

   assert(ps->tos != 0);

   --ps->tos;
   //return ps->array[ps->tos];
   return ps->pArr[ps->tos];
}
