#ifndef __STACKLIST_H__
#define __STACKLIST_H__

#include "DList.h"

#define BUF_SIZE 100

typedef struct _ListStack {
	DList stackBuf;
	int numOfData;
} ListStack;

void LStackInit(ListStack *plist);
int LPush(ListStack *plist, DATA data);
int LPop(ListStack *plist);
DATA LPeek(ListStack *plist);
int LIsEmpty(ListStack *plist);
int LIsFull(ListStack *plist);
void LPrintList(ListStack *plist);

#endif // __STACKLIST_H__


