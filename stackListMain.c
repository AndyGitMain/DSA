#include "stackList.h"

int main(void)
{
	ListStack list;

	LStackInit(&list);
	LPush(&list, 10);
	LPrintList(&list);
	LPush(&list, 20);
	LPrintList(&list);
	LPush(&list, 30);
	LPrintList(&list);
	LPush(&list, 40);
	LPrintList(&list);
	
	LPop(&list);
	LPrintList(&list);
	LPop(&list);
	LPrintList(&list);
	LPop(&list);
	LPrintList(&list);
	
	return 0;
}



