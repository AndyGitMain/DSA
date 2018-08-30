#ifndef __STACK_H__
#define __STACK_H__

#define BUF_SIZE 100
#define TRUE 1
#define FALSE 0

typedef int DATA;


typedef struct _arrayStack {
    DATA buf[BUF_SIZE];
    int numOfData;
} ArrayStack;


void SStackInit(ArrayStack *pStack);
int SPush(ArrayStack *pStack, DATA data);
DATA SPop(ArrayStack *pStack);
int SIsFull(ArrayStack *pStack);
int SIsEmpty(ArrayStack *pStack);
int SPrintStack(ArrayStack *pStack);


#endif //__STACK_H__
