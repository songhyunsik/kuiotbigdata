#ifndef QUEUE_H
#define QUEUE_H
#define ARRAYSIZE 100

typedef struct queue {
    //int array[ARRAYSIZE];
    int *pArr;
    int size;
    int tos;
} Queue;

void initqueue(Queue *pq, int size);
void cleanupQueue(Queue * ps);

void push(Queue *pq, int data);
//int pop(struct queue *pq);
int pop(Queue *pq, int *pData);

#endif