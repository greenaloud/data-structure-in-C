#ifndef BINARY_TREE_H
# define BINARY_TREE_H

typedef int BTData;

typedef struct _bTreeNode
{
	BTData				data;
	struct _bTreeNode	*left;
	struct _bTreeNode	*right;
} BTreeNode;

BTreeNode	*makeBTreeNode(void);
BTData		getData(BTreeNode *bt);
void		setData(BTreeNode *bt, BTData data);

BTreeNode	*getLeftSubTree(BTreeNode *bt);
BTreeNode	*getRightSubTree(BTreeNode *bt);

void		makeLeftSubTree(BTreeNode *main, BTreeNode *sub);
void		makeRightSubTree(BTreeNode *main, BTreeNode *sub);

typedef void VisitFuncPtr(BTData);

void		preorderTraverse(BTreeNode *bt, VisitFuncPtr action);
void		inorderTraverse(BTreeNode *bt, VisitFuncPtr action);
void		postorderTraverse(BTreeNode *bt, VisitFuncPtr action);

void		deleteTree(BTreeNode *bt);

#endif