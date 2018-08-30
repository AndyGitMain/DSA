#include <stdio.h>
#include <string.h>
#include "stack.h"

void SStackInit(ArrayStack *pStack)
{
	//memset(pStack->buf, 0, BUF_SIZE);
	for (int i = 0; i < BUF_SIZE; i++)
		pStack->buf[i] = 0;
	pStack->numOfData = 0;
}

int SPush(ArrayStack *pStack, DATA data)
{
	if (SIsFull(pStack))
		return -1;
	pStack->buf[pStack->numOfData] = data;
	pStack->numOfData++;
}

DATA SPop(ArrayStack *pStack)
{
	DATA ret;
	if (SIsEmpty(pStack))
		return -1;
	ret = pStack->buf[pStack->numOfData];
	pStack->numOfData--;
	return ret;
}

int SIsFull(ArrayStack *pStack)
{
	return pStack->numOfData == BUF_SIZE ? TRUE : FALSE;
}

int SIsEmpty(ArrayStack *pStack)
{
	return pStack->numOfData == 0 ? TRUE : FALSE;
}

int SPrintStack(ArrayStack *pStack)
{
	int cur = 0;

	if (SIsEmpty(pStack))
		return -1;
	
	while (cur < pStack->numOfData) {
		printf("%d ", pStack->buf[cur]);
		cur++;
	}
	printf("\n");
}



