#ifndef __DLIST_H__
#define __DLIST_H__

#define TRUE 1
#define FALSE 0

typedef int DATA;

typedef struct node {
	DATA data;
	struct node *next;
	struct node *prev;
} Node;

typedef struct doubly_list {
	Node *first;
	Node *last;
	int numOfData;
} DList;

void DInitList(DList *plist);
void DInsertFirst(DList *plist, DATA data);
void DInsertLast(DList *plist, DATA data);
DATA DRemoveFirst(DList *plist);
DATA DRemoveLast(DList *plist);
DATA DRemove(DList *plist);
DATA DSearch(DList *plist, DATA data);
DATA DNext(DList *plist);
DATA DPrev(DList *plist);
int DGetCount(DList *plist);
int IsEmpty(DList *plist);
void printData(DList *plist);

#endif //__DLIST_H__

