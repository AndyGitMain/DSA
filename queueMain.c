#include "queue.h"

int main(void)
{
	ArrayQueue queue;

	QInit(&queue);
	QPush(&queue, 10);
	QDisplayData(&queue);
	QPush(&queue, 20);
	QDisplayData(&queue);
	QPush(&queue, 30);
	QDisplayData(&queue);
	QPush(&queue, 40);
	QDisplayData(&queue);
	
	QPop(&queue);
	QDisplayData(&queue);
	QPop(&queue);
	QDisplayData(&queue);
	QPop(&queue);
	QDisplayData(&queue);
	
	return 0;
}


