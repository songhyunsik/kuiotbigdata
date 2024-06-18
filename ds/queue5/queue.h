#ifndef QUEUE_H
#define QUEUE_H

typedef struct queue {
    int *pArr;
    int eleSize;
    int size;
    int tos;
} Queue;

void initqueue(Queue *pq, int size, int eleSize);
void cleanupQueue(Queue * ps);

void push(Queue *pq, const void *pData);
int pop(Queue *pq, void *pData);

#endif