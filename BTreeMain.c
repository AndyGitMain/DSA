#include "BTree.h"

int main(void)
{
	BTreeNode *bt1 = MakeNode(1);
	BTreeNode *bt2 = MakeNode(2);
	BTreeNode *bt3 = MakeNode(3);
	BTreeNode *bt4 = MakeNode(4);

	MakeLeftSubTree(bt1, bt2);
	MakeRightSubTree(bt1, bt3);
	MakeLeftSubTree(bt2, bt4);

	InorderTraverse(bt1);

	return 0;
}
