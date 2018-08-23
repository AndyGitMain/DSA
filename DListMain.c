#include <stdio.h>
#include <stdlib.h>
#include "DList.h"

int main(void)
{
	DList list;

	DInitList(&list);
	DInsertFirst(&list, 10);
	DInsertFirst(&list, 20);
	DInsertLast(&list, 30);
	
	return 0;
}



