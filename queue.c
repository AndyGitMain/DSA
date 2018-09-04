#include <stdio.h>
#include "queue.h"

int QInit(ArrayQueue *pQue)
{
	for (int i = 0; i < BUF_SIZE; i++)
		pQue->queue_buf[i] = 0;

	pQue->front = 0;
	pQue->rear = 0;
}

int QPush(ArrayQueue *pQue, DATA data)
{
	if (QIsFull(pQue))
		return -1;

	pQue->rear++;
	if (pQue->rear == BUF_SIZE)
		pQue->rear = 0;

	pQue->queue_buf[pQue->rear] = data;
}

DATA QPop(ArrayQueue *pQue)
{
	DATA ret;
	if (QIsEmpty(pQue))
		return -1;

	ret = pQue->queue_buf[pQue->front];
	pQue->front++;

	if (pQue->front == BUF_SIZE)
		pQue->front = 0;

	return ret;
}

int QIsFull(ArrayQueue *pQue)
{
	int nRear;

	nRear = pQue->rear;
	nRear++;
	if (nRear == BUF_SIZE)
		nRear = 0;

	return pQue->front == nRear ? TRUE : FALSE;
}

int QIsEmpty(ArrayQueue *pQue)
{
	return pQue->front == pQue->rear ? TRUE : FALSE;
}

int QDisplayData(ArrayQueue *pQue)
{
	if (QIsEmpty(pQue))
		return -1;
	for (int i = pQue->front + 1; i <= pQue->rear; i++)
		printf("%d ", pQue->queue_buf[i]);
	printf("\n");
}

