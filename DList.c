#include <stdio.h>
#include <stdlib.h>
#include "DList.h"

void DInitList(DList *plist)
{
	plist->first = (Node *)malloc(sizeof(Node));
	plist->last = (Node *)malloc(sizeof(Node));
	
	plist->first->next = plist->last;
	plist->first->prev = NULL;

	plist->last->next = NULL;
	plist->last->prev = plist->first;

	plist->numOfData = 0;
}

void DInsertFirst(DList *plist, DATA data)
{
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = plist->first->next;
	newNode->next->prev = newNode;
	newNode->prev = plist->first;
	plist->first->next = newNode;

	(plist->numOfData)++;
}

void DInsertLast(DList *plist, DATA data)
{
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = plist->last;
	newNode->prev = plist->last->prev;
	newNode->prev->next = newNode;
	plist->last->prev = newNode;

	(plist->numOfData)++;
}

DATA DRemoveFirst(DList *plist)
{
	Node *delNode = NULL;
	delNode = plist->first->next;
	plist->first->next = plist->first->next->next;
	plist->first->next->prev = delNode->prev;
	free(delNode);
}

DATA DRemoveLast(DList *plist)
{
	Node *delNode = NULL;
	delNode = plist->last->prev;
	plist->last->prev = delNode->prev;
	delNode->prev->next = plist->last;
	free(delNode);
}

DATA DRemove(DList *plist)
{

}

DATA DSearch(DList *plist, DATA data)
{
	Node *sNode = plist->first;

	while (sNode->next != plist->last) {
		if (sNode->next->data == data)
			return data;
		sNode = sNode->next;
	}
	return -1;
}

DATA DNext(DList *plist)
{

}

DATA DPrev(DList *plist)
{

}

int DGetCount(DList *plist)
{
	return plist->numOfData;
}

int IsEmpty(DList *plist)
{
	return plist->numOfData == 0 ? TRUE : FALSE;
}

void printData(DList *plist)
{
	Node *printNode = plist->first;
	while (printNode->next != plist->last) {
		printf("%d ", printNode->next->data);
		printNode = printNode->next;
	}
	printf("\n");
}




