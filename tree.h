#ifndef TREE_H
#define TREE_H

typedef struct node tree;

struct node
{
    int value;
    tree *left;
    tree *right;
};

int isEmpty(tree *T);
void * left(tree *T);
void * right(tree *T);
int isLeave(tree *T);
int isInternalNode(tree *T);
unsigned height(tree *T);
unsigned max (unsigned a, unsigned b);
unsigned nbNode(tree *T);
unsigned nbLeaves(tree *T);
unsigned nbInternalNode(tree *T);
void * create(int val, tree *ls, tree *rs);
void addElt(tree *src, int val);
void insertSearchTree(tree *src, int val);

#endif