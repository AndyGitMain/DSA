#include "stack.h"

int main(void)
{
	ArrayStack myStack;

	SStackInit(&myStack);
	SPush(&myStack, 10);
	SPrintStack(&myStack);
	SPush(&myStack, 20);
	SPrintStack(&myStack);
	SPush(&myStack, 30);
	SPrintStack(&myStack);
	SPush(&myStack, 40);
	SPrintStack(&myStack);

	SPop(&myStack);
	SPrintStack(&myStack);
	SPop(&myStack);
	SPrintStack(&myStack);
	SPop(&myStack);
	SPrintStack(&myStack);
	
	return 0;
}
