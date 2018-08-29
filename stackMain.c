#include "stack.h"

int main(void)
{
	STACK myStack;

	myStackInit(&myStack);
	myPush(&myStack, 10);
	printStack(&myStack);
	myPush(&myStack, 20);
	printStack(&myStack);
	myPush(&myStack, 30);
	printStack(&myStack);
	myPush(&myStack, 40);
	printStack(&myStack);

	myPop(&myStack);
	printStack(&myStack);
	myPop(&myStack);
	printStack(&myStack);
	myPop(&myStack);
	printStack(&myStack);
	
	return 0;
}
