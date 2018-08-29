#ifndef __STACK_H__
#define __STACK_H__

#define BUF_SIZE 100
#define TRUE 1
#define FALSE 0

typedef int DATA;


typedef struct stack {
    DATA buf[BUF_SIZE];
    int numOfData;
} STACK;


void myStackInit(STACK *pStack);
int myPush(STACK *pStack, DATA data);
DATA myPop(STACK *pStack);
int IsFull(STACK *pStack);
int IsEmpty(STACK *pStack);
int printStack(STACK *pStack);


#endif //__STACK_H__
