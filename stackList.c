#include "stackList.h"

void LStackInit(ListStack *plist)
{
	DInitList(&plist->stackBuf);
	plist->numOfData = 0;
}

int LPush(ListStack *plist, DATA data)
{
	if (LIsFull(plist))
		return -1;
	DInsertFirst(&plist->stackBuf, data);
	plist->numOfData++;
}

int LPop(ListStack *plist)
{
	if (LIsEmpty(plist))
		return -1;
	DRemoveFirst(&plist->stackBuf);
	plist->numOfData--;
}

DATA LPeek(ListStack *plist)
{
	
}

int LIsEmpty(ListStack *plist)
{
	return plist->numOfData == 0 ? TRUE : FALSE;
}

int LIsFull(ListStack *plist)
{
	return plist->numOfData == BUF_SIZE ? TRUE : FALSE;
}

void LPrintList(ListStack *plist)
{
	printData(&plist->stackBuf);
}


