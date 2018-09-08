#include <stdio.h>
#include <stdlib.h>
#include "BTree.h"

BTreeNode* MakeNode(DATA data)
{
	BTreeNode *newNode = (BTreeNode*)malloc(sizeof(BTreeNode));
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->action = DisplayData;
	return newNode;
}

int SetData(BTreeNode *bt, DATA data)
{
	bt->data = data;
}

DATA GetData(BTreeNode *bt)
{
	return bt->data;
}

BTreeNode* GetLeftSubTree(BTreeNode *bt)
{
	return bt->left;
}

BTreeNode* GetRightSubTree(BTreeNode *bt)
{
	return bt->right;
}

void MakeLeftSubTree(BTreeNode *main, BTreeNode *sub)
{
	if (main->left != NULL)
		free(main->left);

	main->left = sub;
}

void MakeRightSubTree(BTreeNode *main, BTreeNode *sub)
{
	if (main->right != NULL)
		free(main->right);

	main->right = sub;
}

void InorderTraverse(BTreeNode *bt)
{
	if (bt == NULL)
		return;

	InorderTraverse(bt->left);
	bt->action(bt);
	InorderTraverse(bt->right);
}

void PreorderTraverse(BTreeNode *bt)
{
	if (bt == NULL)
		return;
	
	bt->action(bt);
	PreorderTraverse(bt->left);
	PreorderTraverse(bt->right);
}

void PostorderTraverse(BTreeNode *bt)
{
	if (bt == NULL)
		return;

	PostorderTraverse(bt->left);
	PostorderTraverse(bt->right);
	bt->action(bt);
}

void DisplayData(BTreeNode *bt)
{
	printf("%d\n", bt->data);
}










