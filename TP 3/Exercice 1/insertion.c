#include"header.h"

node * creer_element(int id)
{
    node * tmp = malloc(sizeof(node));
    if(tmp == NULL) // erreur d'allocation
    {
        puts("erreur d'allocation!");
        exit(1);
    }
    else
    {
        tmp->droit = NULL;
        tmp->gauche = NULL;
        tmp->id = id;
    }
    return tmp;
}


node * insertion(node * root, int id) // insertion en respectant les regles d'arbre binaire
{
    if(root == NULL) // cas arbre est vide
        root = creer_element(id);
    else
    {
        if(id < root->id)
            root->gauche = insertion(root->gauche, id);
        else if(id >= root->id)
            root->droit = insertion(root->droit, id);
    }
    return root;
}
