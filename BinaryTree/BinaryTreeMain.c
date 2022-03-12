#include <stdio.h>
#include "BinaryTree.h"

void showIntData(int data);

int main(void)
{
	BTreeNode *bt1 = makeBTreeNode();
	BTreeNode *bt2 = makeBTreeNode();
	BTreeNode *bt3 = makeBTreeNode();
	BTreeNode *bt4 = makeBTreeNode();
	BTreeNode *bt5 = makeBTreeNode();
	BTreeNode *bt6 = makeBTreeNode();

	setData(bt1, 1);
	setData(bt2, 2);
	setData(bt3, 3);
	setData(bt4, 4);
	setData(bt5, 5);
	setData(bt6, 6);

	makeLeftSubTree(bt1, bt2);
	makeRightSubTree(bt1, bt3);
	makeLeftSubTree(bt2, bt4);
	makeRightSubTree(bt2, bt5);
	makeRightSubTree(bt3, bt6);

	preorderTraverse(bt1, showIntData);
	printf("\n");
	inorderTraverse(bt1, showIntData);
	printf("\n");
	postorderTraverse(bt1, showIntData);
	printf("\n");

	return 0;
}

void showIntData(int data)
{
	printf("%d ", data);
}
