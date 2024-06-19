#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"
#include <assert.h>

void initqueue(Queue *pq, int size, int eleSize) {
    //pq->pArr = malloc(sizeof(int) * size);
    pq->pArr = malloc(eleSize * size);
    assert(pq->pArr != NULL);
    pq->eleSize = eleSize;
    pq->size = size;
    pq->tos = 0;
}

void cleanupQueue(Queue *pq) {
    free(pq->pArr);
}

void push(Queue *pq, const void *pData) {

    assert(pq->tos != pq->size);

    //pq->pArr[pq->tos] = data;
    //memcpy(&pq->pArr[pq->tos], pData, pq->eleSize);
    memcpy((unsigned char *)pq->pArr + pq->tos * pq->eleSize, pData, pq->eleSize);
    ++pq->tos;
}

int pop(Queue *pq, void *pData) {

    assert(pq->tos != 0);

    --pq->tos;
    //*pData = pq->pArr[pq->tos];
    //memcpy(pData, &pq->pArr[pq->tos], pq->eleSize);
    memcpy(pData, (unsigned char *)pq->pArr + pq->tos * pq->eleSize, pq->eleSize);
}