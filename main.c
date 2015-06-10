#include <stdlib.h>
#include <stdio.h>
#include "tree.h"

int main(void)
{

    FILE* file = NULL;
    file = fopen("data.txt", "r+");
    int nb;
    tree nodes;
    int i = 0;
    int a, b;

    if(file != NULL)
    {

        fscanf(file, "%d", &nb);
        nodes = malloc(4 * sizeof(tree));

        while( fscanf(file, "%d %d", &a, &b) == 2 )
        {
            nodes[i]->value = a;
            //nodes[i]->left = left(nodes[i]);

            printf("%d %d\n", nodes[i]->value, b);
            i++;
        }

        printf("Nombre de noeuds : %d\n", nb);

        int y;
        for(y = 0; y < nb; y++)
        {
            //printf("%d %d\n", nodes[i].value, nodes[i].left);
        }

        fclose(file);
    }

    return (0);
}