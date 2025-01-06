#include"header.h"

// affichage in ordre B A C

void affichage(node * root)
{
    if(root == NULL)
        puts("arbre est vide!");
    else
    {
        if(root->gauche != NULL)
            affichage(root->gauche);

        printf("PID : %d \n",root->id);

        if(root->droit != NULL)
            affichage(root->droit);
    }
}
