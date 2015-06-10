#include <stdlib.h>
#include "tree.h"

int isEmpty(tree T)
{
    return T == NULL;
}

tree left(tree T)
{
    if(isEmpty(T))
        return NULL;
    else
        return T->left;
}

tree right(tree T)
{
    if(isEmpty(T))
        return NULL;
    else
        return T->right;
}

//Si c'est une feuille
int isLeave(tree T)
{
    if(isEmpty(T))
        return 0;
    else if(isEmpty(left(T)) && isEmpty(right(T)))
        return 1;
    else
        return 0;
}

//Si c'est un noeud interne
int isInternalNode(tree T)
{
    return !isLeave(T);
}

//Hauteur d'un arbre
unsigned height(tree T)
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
unsigned nbNode(tree T)
{
    if(isEmpty(T))
        return 0;
    else
        return 1 + nbNode(left(T)) + nbNode(right(T));
}

//Nombre de feuilles
unsigned nbLeaves(tree T)
{
    if(isEmpty(T))
        return 0;
    else if(isLeave(T))
        return 1;
    else
        return nbLeaves(left(T)) + nbLeaves(right(T));
}

//Nombre de noeuds internes
unsigned nbInternalNode(tree T)
{
    if(isEmpty(T))
        return 0;
    else if(isLeave(T))
        return 0;
    else
        return 1 + nbInternalNode(left(T)) + nbInternalNode(right(T));
}