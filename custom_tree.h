#ifndef CUSTOM_TREE_H
#define CUSTOM_TREE_H

typedef struct node node;

struct node
{
    int value;
    node *child;
};

void * addNode(node src, int val)
{
    src = malloc(sizeof(node));

    if(res == NULL)
    {
        fprintf(stderr, "Impossible d'allouer le noeud");
        return NULL;
    }

    node->value = val;
    node->child[] = addNode(node, int val);

    return res;
}

#endif