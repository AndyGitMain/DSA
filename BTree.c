#include <stdio.h>
#include <stdlib.h>
#include "BTree.h"

BTreeNode* MakeNode(DATA data)
{
	BTreeNode *newNode = (BTreeNode*)malloc(sizeof(BTreeNode));
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
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

void InorderTraverse(BTreeNode *bt, VisitFucPtr action)
{
	if (bt == NULL)
		return;

	InorderTraverse(bt->left, action);
	action(bt);
	InorderTraverse(bt->right, action);
}

void PreorderTraverse(BTreeNode *bt, VisitFucPtr action)
{
	if (bt == NULL)
		return;
	
	action(bt);
	PreorderTraverse(bt->left, action);
	PreorderTraverse(bt->right, action);
}

void PostorderTraverse(BTreeNode *bt, VisitFucPtr action)
{
	if (bt == NULL)
		return;

	PostorderTraverse(bt->left, action);
	PostorderTraverse(bt->right, action);
	action(bt);
}

void DisplayData(BTreeNode *bt)
{
	printf("%d\n", bt->data);
}










