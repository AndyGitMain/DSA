#include <stdio.h>
#include <stdlib.h>
#include "DList.h"

int main(void)
{
	DList list;

	DInitList(&list);
	DInsertFirst(&list, 10);
	printData(&list);
	DInsertFirst(&list, 20);
	printData(&list);
	DInsertLast(&list, 30);
	printData(&list);
	DRemoveFirst(&list);
	printData(&list);
	DRemoveLast(&list);
	printData(&list);

	DInsertFirst(&list, 20);
	printData(&list);
	DInsertLast(&list, 30);
	printData(&list);

	printf("findData : %d\n", DSearch(&list, 20));
	printf("findData : %d\n", DSearch(&list, 50));

	return 0;
}



