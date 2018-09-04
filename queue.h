#ifndef __QUEUE_H__
#define __QUEUE_H__

#define BUF_SIZE 100
#define TRUE 1
#define FALSE 0

typedef int DATA;

typedef struct _ArrayQueue {
	DATA queue_buf[BUF_SIZE];
	int front;
	int rear;
} ArrayQueue;

int QInit(ArrayQueue *pQue);
int QPush(ArrayQueue *pQue, DATA data);
int QPop(ArrayQueue *pQue);
int QIsFull(ArrayQueue *pQue);
int QIsEmpty(ArrayQueue *pQue);
int QDisplayData(ArrayQueue *pQue);

#endif // __QUEUE_H__



