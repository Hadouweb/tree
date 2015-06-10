#ifndef TREE_H
#define TREE_H

typedef struct node *tree;

struct node
{
    int value;
    tree left;
    tree right;
};

int isEmpty(tree T);
tree left(tree T);
tree right(tree T);
int isLeave(tree T);
int isInternalNode(tree T);
unsigned height(tree T);
unsigned max (unsigned a, unsigned b);
unsigned nbNode(tree T);
unsigned nbLeaves(tree T);
unsigned nbInternalNode(tree T);

#endif