#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include <assert.h>

void initqueue(Queue *pq, int size) {
    pq->pArr = malloc(sizeof(int) * size);
    pq->size = size;
    pq->tos = 0;
}

void cleanupQueue(Queue *pq) {
    free(pq->pArr);
}

/*static int queue[100];
static int rear;
static int front;*/

void push(Queue *pq, int data) {
    //queue[rear] = data;
    //++rear;

    /*if(pq->tos == ARRAYSIZE) {
        printf(stderr, "queue is full\n");
        exit(1);
    }*/

    assert(pq->tos != pq->size);

    //pq->array[pq->tos] = data;
    pq->pArr[pq->tos] = data;
    ++pq->tos;
}

int pop(Queue *pq, int *pData) {
    //int i = front;
    //++front;
    //return queue[i];
    //++front;
    /*if(pq->tos == 0) {
        fprintf(stderr, "queue is empty\n");
        exit(2);
    }*/

    assert(pq->tos != 0);

    --pq->tos;
    //return pq->array[pq->tos];
    *pData = pq->pArr[pq->tos];
}