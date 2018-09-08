#ifndef __BTREE_H__
#define __BTREE_H__

typedef int DATA;

typedef struct _BTreeNode {
	DATA data;
	struct _BTreeNode *left;
	struct _BTreeNode *right;
	void (*action)(struct _BTreeNode *bt);
} BTreeNode;


BTreeNode* MakeNode(DATA data);
int SetData(BTreeNode *bt, DATA data);
DATA GetData(BTreeNode *bt);
BTreeNode* GetLeftSubTree(BTreeNode *bt);
BTreeNode* GetRightSubTree(BTreeNode *bt);
void MakeLeftSubTree(BTreeNode *main, BTreeNode *sub);
void MakeRightSubTree(BTreeNode *main, BTreeNode *sub);
void InorderTraverse(BTreeNode *bt);
void PreorderTraverse(BTreeNode *bt);
void PostorderTraverse(BTreeNode *bt);
void DisplayData(BTreeNode *bt);

#endif // __BTREE_H__
