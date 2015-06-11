#include <stdlib.h>
#include <stdio.h>
#include "tree.h"

int isEmpty(tree *T)
{
    return T == NULL;
}

void * left(tree *T)
{
    if(isEmpty(T))
        return NULL;
    else
        return T->left;
}

void * right(tree *T)
{
    if(isEmpty(T))
        return NULL;
    else
        return T->right;
}

//Si c'est une feuille
int isLeave(tree *T)
{
    if(isEmpty(T))
        return 0;
    else if(isEmpty(left(T)) && isEmpty(right(T)))
        return 1;
    else
        return 0;
}

//Si c'est un noeud interne
int isInternalNode(tree *T)
{
    return !isLeave(T);
}

//Hauteur d'un arbre
unsigned height(tree *T)
{
    if(isEmpty(T))
        return 0;
    else
        return 1 + max( height(left(T)), height(right(T)) );
}

unsigned max (unsigned a, unsigned b)
{
    return (a > b) ? a : b;
}

//Nombre de noeuds
unsigned nbNode(tree *T)
{
    if(isEmpty(T))
        return 0;
    else
        return 1 + nbNode(left(T)) + nbNode(right(T));
}

//Nombre de feuilles
unsigned nbLeaves(tree *T)
{
    if(isEmpty(T))
        return 0;
    else if(isLeave(T))
        return 1;
    else
        return nbLeaves(left(T)) + nbLeaves(right(T));
}

//Nombre de noeuds internes
unsigned nbInternalNode(tree *T)
{
    if(isEmpty(T))
        return 0;
    else if(isLeave(T))
        return 0;
    else
        return 1 + nbInternalNode(left(T)) + nbInternalNode(right(T));
}

//Création d'un arbre
void * create(int val, tree *ls, tree *rs)
{
    tree *res;
    res = malloc(sizeof(tree));

    if(res == NULL)
    {
        fprintf(stderr, "Impossible d'allouer le noeud");
        return NULL;
    }

    res->value = val;
    res->left = ls;
    res->right = rs;

    return res;
}

//Ajouter un élément
void addElt(tree *src, int val)
{
    if(src == NULL)
    {
        src = create(val, NULL, NULL);
    }
    else if(isEmpty(left(src)))
    {
        src->left = create(val, NULL, NULL);
    }
    else if(isEmpty(right(src)))
    {
        src->right = create(val, NULL, NULL);
    }
    else
    {
        addElt(left(src), val);
    }
}

//Ajouter un noeud de la bonne maniere
void insertSearchTree(tree *src, int val)
{
    if (isEmpty(src))
    {
        src = create(val, NULL, NULL);
    }
    else
    {
        if(val < src->value)
        {
            insertSearchTree(left(src), val);
        }
        else
        {
            insertSearchTree(right(src), val);
        }
    }
}