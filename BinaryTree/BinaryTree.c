#include <stdlib.h>
#include "BinaryTree.h"

BTreeNode	*makeBTreeNode(void)
{
	BTreeNode *bt;

	bt = malloc(sizeof *bt);
	bt->left = NULL;
	bt->right = NULL;
	return (bt);
}

BTData	getData(BTreeNode *bt)
{
	return (bt->data);
}

void	setData(BTreeNode *bt, BTData data)
{
	bt->data = data;
}

BTreeNode	*getLeftSubTree(BTreeNode *bt)
{
	return (bt->left);
}

BTreeNode	*getRightSubTree(BTreeNode *bt)
{
	return (bt->right);
}

void	makeLeftSubTree(BTreeNode *main, BTreeNode *sub)
{
	if (main->left != NULL)
		free(main->left);
	main->left = sub;
}

void	makeRightSubTree(BTreeNode *main, BTreeNode *sub)
{
	if (main->right != NULL)
		free(main->right);
	main->right = sub;
}

void	preorderTraverse(BTreeNode *bt, VisitFuncPtr action)
{
	if (bt == NULL)
		return ;
	action(bt->data);
	preorderTraverse(bt->left, action);
	preorderTraverse(bt->right, action);
}

void	inorderTraverse(BTreeNode *bt, VisitFuncPtr action)
{
	if (bt == NULL)
		return ;
	inorderTraverse(bt->left, action);
	action(bt->data);
	inorderTraverse(bt->right, action);
}

void	postorderTraverse(BTreeNode *bt, VisitFuncPtr action)
{
	if (bt == NULL)
		return ;
	postorderTraverse(bt->left, action);
	postorderTraverse(bt->right, action);
	action(bt->data);
}
