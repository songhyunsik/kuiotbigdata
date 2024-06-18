#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void initqueue(struct queue *pq) {
    pq->tos = 0;
}

/*static int queue[100];
static int rear;
static int front;*/

void push(struct queue *pq, int data) {
    //queue[rear] = data;
    //++rear;

    if(pq->tos == ARRAYSIZE) {
        printf(stderr, "queue is full\n");
        exit(1);
    }

    pq->array[pq->tos] = data;
    ++pq->tos;
}

int pop(struct queue *pq) {
    //int i = front;
    //++front;
    //return queue[i];
    //++front;
    if(pq->tos == 0) {
        fprintf(stderr, "queue is empty\n");
        exit(2);
    }

    --pq->tos;
    return pq->array[pq->tos];
}