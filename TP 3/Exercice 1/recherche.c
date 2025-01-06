#include"header.h"

void recherche(node * root, int id)
{
    if(root == NULL)
        puts("process non trouve!");
    else
    {
        if(id < root->id)
            recherche(root->gauche,id);
        else if(id > root->id)
            recherche(root->droit,id);
        else
            printf("PID trouve : %d \n",root->id);
    }
}
