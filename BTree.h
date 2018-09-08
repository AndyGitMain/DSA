#ifndef __BTREE_H__
#define __BTREE_H__

typedef int DATA;

typedef struct _BTreeNode {
	DATA data;
	struct _BTreeNode *left;
	struct _BTreeNode *right;
} BTreeNode;

typedef void (*VisitFucPtr)(BTreeNode *bt);

BTreeNode* MakeNode(DATA data);
int SetData(BTreeNode *bt, DATA data);
DATA GetData(BTreeNode *bt);
BTreeNode* GetLeftSubTree(BTreeNode *bt);
BTreeNode* GetRightSubTree(BTreeNode *bt);
void MakeLeftSubTree(BTreeNode *main, BTreeNode *sub);
void MakeRightSubTree(BTreeNode *main, BTreeNode *sub);
void InorderTraverse(BTreeNode *bt, VisitFucPtr action);
void PreorderTraverse(BTreeNode *bt, VisitFucPtr action);
void PostorderTraverse(BTreeNode *bt, VisitFucPtr action);
void DisplayData(BTreeNode *bt);

#endif // __BTREE_H__



