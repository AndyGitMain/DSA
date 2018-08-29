#include <stdio.h>
#include <string.h>
#include "stack.h"

void myStackInit(STACK *pStack)
{
	memset(pStack->buf, 0, BUF_SIZE);
	pStack->numOfData = 0;
}

int myPush(STACK *pStack, DATA data)
{
	if (IsFull(pStack))
		return -1;
	pStack->buf[pStack->numOfData] = data;
	pStack->numOfData++;
}

DATA myPop(STACK *pStack)
{
	DATA ret;
	if (IsEmpty(pStack))
		return -1;
	ret = pStack->buf[pStack->numOfData];
	pStack->numOfData--;
	return ret;
}

int IsFull(STACK *pStack)
{
	return pStack->numOfData == BUF_SIZE ? TRUE : FALSE;
}

int IsEmpty(STACK *pStack)
{
	return pStack->numOfData == 0 ? TRUE : FALSE;
}

int printStack(STACK *pStack)
{
	int cur = 0;

	if (IsEmpty(pStack))
		return -1;
	
	cur = pStack->numOfData;
	while (cur > 0) {
		printf("%d ", pStack->buf[cur]);
		cur--;
	}
	printf("\n");
}



